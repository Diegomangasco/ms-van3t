/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

* Created by:
    *  Diego Gasco, Politecnico di Torino (diego.gasco@polito.it, diego.gasco99@gmail.com)
*/

#include "txTracker.h"

namespace ns3 {
NS_LOG_COMPONENT_DEFINE ("TxTracker");

std::unordered_map<std::string, txTracker::txParameters11p> m_txMap11p;
std::unordered_map<std::string, txTracker::txParametersNR> m_txMapNr;
Ptr<txTracker> tracker;
bool isInterference = false;

TypeId
txTracker::GetTypeId ()
{
  static TypeId tid = TypeId ("ns3::TxTracker").SetParent<Object> ().AddConstructor<txTracker> ();
  return tid;
}

std::pair<std::unordered_map<std::string, std::tuple<double, double>>, std::unordered_map<std::string, std::tuple<double, Ptr<SpectrumValue>>>>
txTracker::getTxMap()
{
  std::unordered_map<txTracker::TxType, int> txTypes;
  txTypes[txTracker::TxType::WIFI] = 0;
  txTypes[txTracker::TxType::NR] = 0;

  std::unordered_map<std::string, std::tuple<double, double>> txMap_11p;
  std::unordered_map<std::string, std::tuple<double, Ptr<SpectrumValue>>> txMap_nr;

  for (auto n : m_txMap11p)
    {
      if (n.second.isTransmitting)
        {
          txTypes[txTracker::TxType::WIFI] += 1;
          txMap_11p[n.first] = std::make_tuple (n.second.bandwidth, n.second.txPower_W);
        }
    }

  for (auto n : m_txMapNr)
    {
      if (n.second.isTransmitting)
        {
          txTypes[txTracker::TxType::NR] += 1;
          txMap_nr[n.first] = std::make_tuple (n.second.rbBandwidth, n.second.txSpectrum);
        }
    }

  if (txTypes[txTracker::TxType::WIFI] != 0 && txTypes[txTracker::TxType::NR] != 0)
    {
      isInterference = true;
    }

  std::pair<std::unordered_map<std::string, std::tuple<double, double>>, std::unordered_map<std::string, std::tuple<double, Ptr<SpectrumValue>>>> txMap;
  txMap = std::make_pair (txMap_11p, txMap_nr);
  return txMap;
}

void
nrNodeState(std::string context, Time duration)
{
  // In this case Duration is the time the channel will be in a busy state (referred to the future)
  std::size_t first = context.find ("/NodeList/") + 10; // 10 is the length of "/NodeList/"
  std::size_t last = context.find ("/", first);
  std::string node = context.substr (first, last - first);

  uint8_t nodeID = std::stoi (node);
  std::string vehID;
  for (auto n : m_txMapNr)
    {
      if (n.second.nodeID == nodeID)
        {
          vehID = n.first;
          break;
        }
    }

  NS_ASSERT_MSG (vehID != "", "Vehicle ID not found in the txMapNr");

  Ptr<NrUePhy> uePhy = m_txMapNr[vehID].netDevice->GetPhy (0);

  NrSpectrumPhy::State state = uePhy->GetSpectrumPhy ()->GetState();

  if (state != NrSpectrumPhy::TX)
    {
      m_txMapNr[vehID].isTransmitting = false;
      return;
    }

  m_txMapNr[vehID].isTransmitting = true;
  Ptr<SpectrumValue> spectrum = uePhy->GetSpectrumPhy ()->GetTxPowerSpectralDensity();
  m_txMapNr[vehID].txSpectrum = spectrum;

  std::pair<std::unordered_map<std::string, std::tuple<double, double>>, std::unordered_map<std::string, std::tuple<double, Ptr<SpectrumValue>>>> txMap;
  txMap = txTracker::getTxMap();
  if (!isInterference)
    {
      // Don't call Sionna if the transmission regards only a single technology
      return;
    }
  else
    {
      // TODO Call for the interference management
      isInterference = false;
    }
}

void
wifiNodeState (std::string context, Time start, Time duration, WifiPhyState state)
{
  // End and start are expressed in ns
  // In this case Duration is the time the channel was in the specific state (referred to the past)
  std::size_t first = context.find ("/NodeList/") + 10; // 10 is the length of "/NodeList/"
  std::size_t last = context.find ("/", first);
  std::string node = context.substr (first, last - first);

  uint8_t nodeID = std::stoi (node);
  std::string vehID = "";
  for (auto n : m_txMap11p)
    {
      if (n.second.nodeID == nodeID)
        {
          vehID = n.first;
          break;
        }
    }

  NS_ASSERT_MSG (vehID != "", "Vehicle ID not found in the txMap11p");

  if (state != WifiPhyState::TX)
    {
      m_txMap11p[vehID].isTransmitting = false;
      return;
    }
    m_txMap11p[vehID].isTransmitting = true;
    std::pair<std::unordered_map<std::string, std::tuple<double, double>>, std::unordered_map<std::string, std::tuple<double, Ptr<SpectrumValue>>>> txMap;
    txMap = txTracker::getTxMap();
    if (!isInterference)
      {
        // Don't call Sionna if the transmission regards only a single technology
        return;
      }
    else
      {
        // TODO Call for the interference management
        isInterference = false;
      }
}

void
txTracker::SetTracker(Ptr<txTracker> txTracker)
{
  tracker = txTracker;
}

void
txTracker::startTracking ()
{
  Config::Connect("/NodeList/*/DeviceList/*/Phy/State/State", MakeCallback (&wifiNodeState));
  Config::Connect("/NodeList/*/DeviceList/*/$ns3::NrUeNetDevice/ComponentCarrierMapUe/*/NrUePhy/NrSpectrumPhyList/*/ChannelOccupied", MakeCallback(&nrNodeState));
}

void
txTracker::insert11pNodes (std::vector<std::tuple<std::string, uint8_t, Ptr<WifiNetDevice>>> nodes)
{
  for (auto n : nodes)
    {
      std::string vehID = std::get<0>(n);
      uint8_t nodeID = std::get<1>(n);
      Ptr<WifiNetDevice> netDevice = std::get<2>(n);
      NS_ASSERT_MSG (netDevice != nullptr, "Node is nullptr");
      Ptr<WifiPhy> wifiPhy = netDevice->GetPhy();
      double bandwidth = wifiPhy->GetChannelWidth();
      m_txMap11p[vehID] = txParameters11p {
          nodeID,
          netDevice,
          bandwidth,
          std::pow(10, (wifiPhy->GetTxPowerStart() - 30) / 10),
          false
      };
    }
}

void
txTracker::insertNrNodes (std::vector<std::tuple<std::string, uint8_t, Ptr<NrUeNetDevice>>> nodes)
{
  for (auto n : nodes)
    {
      std::string vehID = std::get<0>(n);
      uint8_t nodeID = std::get<1>(n);
      Ptr<NrUeNetDevice> netDevice = std::get<2>(n);
      NS_ASSERT_MSG (netDevice != nullptr, "Node is nullptr");
      Ptr<NrUePhy> uePhy = netDevice->GetPhy (0);
      uint32_t bandwidth = uePhy->GetChannelBandwidth();
      double rbBandwidth = bandwidth / uePhy->GetRbNum();
      m_txMapNr[vehID] = txParametersNR {
          nodeID,
          netDevice,
          Ptr<SpectrumValue> {},
          rbBandwidth,
          false,
      };
    }
}

txTracker::txTracker () = default;

txTracker::~txTracker () = default;
}
