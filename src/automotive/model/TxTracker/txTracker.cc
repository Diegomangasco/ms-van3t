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
// Ptr<NrHelper> nrHelper = nullptr;

TypeId
txTracker::GetTypeId ()
{
  static TypeId tid = TypeId ("ns3::TxTracker").SetParent<Object> ().AddConstructor<txTracker> ();
  return tid;
}

// Tuple: <vehID, minBand, maxBand, txPower>
std::vector<std::tuple<std::string, txTracker::TxType, double, double, double>>
txTracker::getTxArray()
{
  std::vector<std::tuple<std::string, TxType, double, double, double>> txArray;
  for (auto n : m_txMap11p)
    {
      if (n.second.isTransmitting)
        {
          std::tuple<std::string, TxType, double, double, double> tuple = std::make_tuple (
              n.first, TxType::WIFI, 0.0, std::get<0>(n.second.txBandsPower), std::get<1>(n.second.txBandsPower)
              );
          txArray.push_back (tuple);
        }
    }

  for (auto n : m_txMapNr)
    {
      if (n.second.isTransmitting)
        {
          std::tuple<std::string, TxType, double, double, double> tuple = std::make_tuple (
              n.first, TxType::NR, std::get<0>(n.second.txBandsPower)/1e6, std::get<1>(n.second.txBandsPower)/1e6, std::get<2>(n.second.txBandsPower)
              );
          txArray.push_back (tuple);
        }
    }
  return txArray;
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
  else
    {
      m_txMapNr[vehID].isTransmitting = true;
    }

  // Hz
  uint32_t bandwidth = uePhy->GetChannelBandwidth();

  // TODO verify they are dBm/Hz
  Ptr<SpectrumValue> spectrum = uePhy->GetSpectrumPhy ()->GetTxPowerSpectralDensity();

  Ptr<const SpectrumModel> spectrumModel = spectrum->GetSpectrumModel();
  double rbBandwidth = bandwidth / spectrumModel->GetNumBands();

  bool foundFirst = false;
  bool foundLast = false;
  double minBand;
  double maxBand;
  double txPower = 0.0;
  for (size_t i = 0; i < spectrum->GetValuesN(); ++i)
    {
      double powerSpectralDensity = (*spectrum)[i];
      if (powerSpectralDensity <= 0.0)
        {
          if(foundFirst && !foundLast)
            {
              maxBand = i * rbBandwidth;
              foundLast = true;
            }
          continue;
        }
      else
        {
          if(!foundFirst)
            {
              minBand = i * rbBandwidth;
              foundFirst = true;
            }
        }
      txPower += powerSpectralDensity * rbBandwidth;
      if (foundLast)
        {
          break;
        }
    }

  if (!foundLast)
    {
      maxBand = spectrum->GetValuesN() * rbBandwidth;
    }

  double txPower_dBm = 10 * log10 (txPower) + 30;

  m_txMapNr[vehID].txBandsPower = std::make_tuple (minBand, maxBand, txPower_dBm);

  std::vector<std::tuple<std::string, txTracker::TxType, double, double, double>> txArray;
  txArray = tracker->getTxArray();
  if (txArray.size() > 1)
    {
      std::vector<std::tuple<std::string, double, double, double>> sionnaArray;
      std::unordered_map<txTracker::TxType, std::vector<std::tuple<std::string, double, double, double>>> txMap;
      for (auto tx : txArray)
        {
          txTracker::TxType type = std::get<1>(tx);
          if (txMap.find(type) == txMap.end())
            {
              std::tuple<std::string, double, double, double> tuple = std::make_tuple (std::get<0>(tx), std::get<2>(tx), std::get<3>(tx), std::get<4>(tx));
              txMap[type] = {tuple};
            }
          else
            {
              std::tuple<std::string, double, double, double> tuple = std::make_tuple (std::get<0>(tx), std::get<2>(tx), std::get<3>(tx), std::get<4>(tx));
              txMap[type].push_back (tuple);
            }
        }
      if (!txMap[txTracker::WIFI].empty() && !txMap[txTracker::NR].empty())
        {
          sionnaArray = txMap[txTracker::WIFI];
          sionnaArray.insert(sionnaArray.end(), txMap[txTracker::NR].begin(), txMap[txTracker::NR].end());
          // Call Sionna for interference calculation
          NS_ASSERT_MSG (tracker != nullptr, "Tracker is nullptr");
          tracker->sendSionna (sionnaArray);
        }
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
    }
  else
    {
      m_txMap11p[vehID].isTransmitting = true;
      std::vector<std::tuple<std::string, txTracker::TxType, double, double, double>> txArray;
      txArray = tracker->getTxArray();
      if (txArray.size() > 1)
        {
          std::vector<std::tuple<std::string, double, double, double>> sionnaArray;
          std::unordered_map<txTracker::TxType, std::vector<std::tuple<std::string, double, double, double>>> txMap;
          for (auto tx : txArray)
            {
              txTracker::TxType type = std::get<1>(tx);
              if (txMap.find(type) == txMap.end())
                {
                  std::tuple<std::string, double, double, double> tuple = std::make_tuple (std::get<0>(tx), std::get<2>(tx), std::get<3>(tx), std::get<4>(tx));
                  txMap[type] = {tuple};
                }
              else
                {
                  std::tuple<std::string, double, double, double> tuple = std::make_tuple (std::get<0>(tx), std::get<2>(tx), std::get<3>(tx), std::get<4>(tx));
                  txMap[type].push_back (tuple);
                }
            }
          if (!txMap[txTracker::WIFI].empty() && !txMap[txTracker::NR].empty())
            {
              sionnaArray = txMap[txTracker::WIFI];
              sionnaArray.insert(sionnaArray.end(), txMap[txTracker::NR].begin(), txMap[txTracker::NR].end());
              // Call Sionna for interference calculation
              NS_ASSERT_MSG (tracker != nullptr, "Tracker is nullptr");
              tracker->sendSionna (sionnaArray);
            }
        }
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
txTracker::insertNrNodes (std::vector<std::tuple<std::string, uint8_t, Ptr<NrUeNetDevice>>> nodes)
{
  for (auto n : nodes)
    {
      std::string vehID = std::get<0>(n);
      uint8_t nodeID = std::get<1>(n);
      Ptr<NrUeNetDevice> netDevice = std::get<2>(n);
      NS_ASSERT_MSG (netDevice != nullptr, "Node is nullptr");
      m_txMapNr[vehID] = txParametersNR {
          nodeID,
          std::tuple<double, double, double>{},
          netDevice,
          false
      };
    }
}

void
txTracker::sendSionna(std::vector<std::tuple<std::string, double, double, double>> txArray)
{

}

txTracker::txTracker () = default;

txTracker::~txTracker () = default;
}
