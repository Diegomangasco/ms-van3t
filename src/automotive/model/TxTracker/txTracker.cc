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
Ptr<NrHelper> nrHelper = nullptr;

TypeId
txTracker::GetTypeId ()
{
  static TypeId tid = TypeId ("ns3::TxTracker").SetParent<Object> ().AddConstructor<txTracker> ();
  return tid;
}

// Tuple: <vehID, minBand, maxBand, txPower>
std::vector<std::tuple<std::string, double, double, double>>
txTracker::getTxArray()
{
  std::vector<std::tuple<std::string, double, double, double>> txArray;
  for (auto n : m_txMap11p)
    {
      if (n.second.isTransmitting)
        {
          std::tuple<std::string, double, double, double> tuple = std::make_tuple (
              n.first, 0.0, std::get<0>(n.second.txBandsPower), std::get<1>(n.second.txBandsPower)
              );
          txArray.push_back (tuple);
        }
    }

  for (auto n : m_txMapNr)
    {
      if (n.second.isTransmitting)
        {
          std::tuple<std::string, double, double, double> tuple = std::make_tuple (
              n.first, std::get<0>(n.second.txBandsPower), std::get<1>(n.second.txBandsPower), std::get<2>(n.second.txBandsPower)
              );
          txArray.push_back (tuple);
        }
    }
  return txArray;
}

void
cleanTxMapNR()
{

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
  NS_ASSERT_MSG(nrHelper != nullptr, "NR Helper not set.");

  m_txMap11p[vehID].isTransmitting = true;
  m_txMapNr[vehID].txDuration = Simulator::Now() + duration;
  Ptr<NetDevice> netDevice = m_txMapNr[node].node->GetDevice(0);

  NS_ASSERT_MSG (netDevice != nullptr, "NetDevice is nullptr");

  Ptr<SpectrumValue> spectrum = nrHelper->GetUePhy (netDevice, 0)->GetSpectrumPhy ()->GetTxPowerSpectralDensity();

  // TODO manage the Spectrum value to get the txPower and bands
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
    }
  else
    {
      m_txMap11p[vehID].isTransmitting = true;
    }

}

void
txTracker::SetNrHelper(Ptr<NrHelper> helper)
{
  nrHelper = helper;
}

void
txTracker::startTracking ()
{
  Config::Connect("/NodeList/*/DeviceList/*/Phy/State/State", MakeCallback (&wifiNodeState));
  Config::Connect("/NodeList/*/DeviceList/*/$ns3::NrUeNetDevice/ComponentCarrierMapUe/*/NrUePhy/NrSpectrumPhyList/*/ChannelOccupied", MakeCallback(&nrNodeState));
}

void
txTracker::insert11pNodes (std::vector<std::tuple<std::string, uint8_t>> nodes, double bandWidth, double txPower)
{
  for (auto n : nodes)
    {
      std::string vehID = std::get<0>(n);
      uint8_t nodeID = std::get<1>(n);
      m_txMap11p[vehID] = txParameters11p {
          nodeID,
          std::tuple<double, double> {bandWidth, txPower},
          false
      };
    }
}

void
txTracker::insertNrNodes (std::vector<std::tuple<std::string, uint8_t, Ptr<Node>>> nodes)
{
  for (auto n : nodes)
    {
      std::string vehID = std::get<0>(n);
      uint8_t nodeID = std::get<1>(n);
      Ptr<Node> node = std::get<2>(n);
      NS_ASSERT_MSG (node != nullptr, "Node is nullptr");
      m_txMapNr[vehID] = txParametersNR {
          nodeID,
          std::tuple<double, double, double>{},
          node,
          Time(0.0),
          false
      };
    }
}

txTracker::txTracker () = default;

txTracker::~txTracker () = default;
}
