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

std::unordered_map<std::string, txParameters11p> m_txMap11p;
std::unordered_map<std::string, txParametersNR> m_txMapNr;

double wifiTxPower = 0.0;
double wifiTxBandwidth = 0.0;
double rbBandwidth = 0.0;
Ptr<SpectrumValue> nrTxSpectrum = nullptr;
bool interference = false;

void
SetWifiNrMetrics(std::tuple<double, double> wifiParams, std::unordered_map<std::string, std::tuple<double, Ptr<SpectrumValue>>> nrTxMap)
{
  wifiTxBandwidth = std::get<0>(wifiParams) * 1e6;
  wifiTxPower = std::get<1>(wifiParams);
  rbBandwidth = std::get<0>(nrTxMap.begin()->second);
  SpectrumValue spectrum = SpectrumValue((std::get<1>(nrTxMap.begin()->second))->GetSpectrumModel());
  for (auto it = nrTxMap.begin(); it != nrTxMap.end(); ++it)
    {
      uint8_t i = 0;
      Ptr<SpectrumValue> spetrTmp = std::get<1>(it->second);
      for (auto it2 = spetrTmp->ValuesBegin(); it2 != spetrTmp->ValuesEnd(); ++it2)
        {
          if (*it2 != 0)
            {
              spectrum[i] += *it2;
            }
          i++;
        }
    }
  nrTxSpectrum = Create<SpectrumValue>(spectrum);
  interference = true;
}

void
NrNodeState(std::string context, Time duration)
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
      interference = false;
      return;
    }

  std::unordered_map<std::string, std::tuple<double, Ptr<SpectrumValue>>> txMapNr;
  for (auto it = m_txMapNr.begin(); it != m_txMapNr.end(); ++it)
    {
      if (it->first != vehID)
        {
          Ptr<NrUePhy> nrPhy = it->second.netDevice->GetPhy(0);
          NrSpectrumPhy::State current_state = nrPhy->GetSpectrumPhy ()->GetState();
          if (current_state == NrSpectrumPhy::State::TX)
            {
              Ptr<SpectrumValue> spectrum = nrPhy->GetSpectrumPhy ()->GetTxPowerSpectralDensity();
              txMapNr[it->first] = std::make_tuple (it->second.rbBandwidth, spectrum);
            }
        }
    }
  Ptr<SpectrumValue> spectrum = uePhy->GetSpectrumPhy ()->GetTxPowerSpectralDensity();
  txMapNr[vehID] = std::make_tuple (m_txMapNr[vehID].rbBandwidth, spectrum);

  uint8_t wifiDevices = 0;
  std::tuple<double, double> wifiParams;
  for (auto n : m_txMap11p)
    {
      Ptr<WifiPhy> wifiPhy = n.second.netDevice->GetPhy();
      WifiPhyState current_state = wifiPhy->GetState()->GetState();
      if (current_state == WifiPhyState::TX)
        {
          wifiDevices += 1;
          wifiParams = std::make_tuple (n.second.bandwidth, n.second.txPower_W);
          break;
        }
    }
  if (wifiDevices > 0)
    {
      SetWifiNrMetrics(wifiParams, txMapNr);
    }
  else
    {
      interference = false;
    }
}

void
WifiNodeState (std::string context, Time start, Time duration, WifiPhyState state)
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
      interference = false;
      return;
    }

  std::unordered_map<std::string, std::tuple<double, Ptr<SpectrumValue>>> txMapNr;
  uint8_t nrDevices = 0;
  for (auto it = m_txMapNr.begin(); it != m_txMapNr.end(); ++it)
    {
      if (it->first != vehID)
        {
          Ptr<NrUePhy> nrPhy = it->second.netDevice->GetPhy(0);
          NrSpectrumPhy::State current_state = nrPhy->GetSpectrumPhy ()->GetState();
          if (current_state == NrSpectrumPhy::State::TX)
            {
              nrDevices++;
              Ptr<SpectrumValue> spectrum = nrPhy->GetSpectrumPhy ()->GetTxPowerSpectralDensity();
              txMapNr[it->first] = std::make_tuple (it->second.rbBandwidth, spectrum);
            }
        }
    }


  std::tuple<double, double> wifiParams = std::make_tuple (m_txMap11p[vehID].bandwidth, m_txMap11p[vehID].txPower_W);
  if (nrDevices > 0)
    {
      SetWifiNrMetrics(wifiParams, txMapNr);
    }
  else
    {
      interference = false;
    }
}

void
StartTxTracking ()
{
  Config::Connect("/NodeList/*/DeviceList/*/Phy/State/State", MakeCallback (&WifiNodeState));
  Config::Connect("/NodeList/*/DeviceList/*/$ns3::NrUeNetDevice/ComponentCarrierMapUe/*/NrUePhy/NrSpectrumPhyList/*/ChannelOccupied", MakeCallback(&NrNodeState));
  Config::Connect("/NodeList/*/DeviceList/*/$ns3::NrUeNetDevice/ComponentCarrierMapUe/*/NrUePhy/NrSpectrumPhyList/*/TxDataTrace", MakeCallback(&NrNodeState));
  Config::Connect("/NodeList/*/DeviceList/*/$ns3::NrUeNetDevice/ComponentCarrierMapUe/*/NrUePhy/NrSpectrumPhyList/*/TxCtrlTrace", MakeCallback(&NrNodeState));
  // Config::Connect("/NodeList/*/DeviceList/*/$ns3::NrUeNetDevice/ComponentCarrierMapUe/*/NrUePhy/NrSpectrumPhyList/*/RxDataTrace", MakeCallback(&NrNodeState));
}

void
Insert11pNodes (std::vector<std::tuple<std::string, uint8_t, Ptr<WifiNetDevice>>> nodes)
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
      };
    }
}

void
InsertNrNodes (std::vector<std::tuple<std::string, uint8_t, Ptr<NrUeNetDevice>>> nodes)
{
  for (auto n : nodes)
    {
      std::string vehID = std::get<0>(n);
      uint8_t nodeID = std::get<1>(n);
      Ptr<NrUeNetDevice> netDevice = std::get<2>(n);
      NS_ASSERT_MSG (netDevice != nullptr, "Node is nullptr");
      Ptr<NrUePhy> uePhy = netDevice->GetPhy (0);
      uint32_t bandwidth = uePhy->GetChannelBandwidth();
      double rbBand = bandwidth / uePhy->GetRbNum();
      m_txMapNr[vehID] = txParametersNR {
          nodeID,
          netDevice,
          rbBand,
      };
    }
}

}
