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

TypeId
txTracker::GetTypeId ()
{
  static TypeId tid = TypeId ("ns3::TxTracker").SetParent<Object> ().AddConstructor<txTracker> ();
  return tid;
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

  // TODO transform node in vehicleID

  m_txMap11p[node].isTransmitting = true;
  m_txMapNr[node].txDuration = Simulator::Now() + duration;

}

void
wifiNodeState (std::string context, Time start, Time duration, WifiPhyState state)
{
  // End and start are expressed in ns
  // In this case Duration is the time the channel was in the specific state (referred to the past)
  std::size_t first = context.find ("/NodeList/") + 10; // 10 is the length of "/NodeList/"
  std::size_t last = context.find ("/", first);
  std::string node = context.substr (first, last - first);

  // TODO transform node in vehicleID

  if (state != WifiPhyState::TX)
    {
      m_txMap11p[node].isTransmitting = false;
    }
  else
    {
      m_txMap11p[node].isTransmitting = true;
    }

}

void
txTracker::startTracking ()
{
  Config::Connect("/NodeList/*/DeviceList/*/Phy/State/State", MakeCallback (&wifiNodeState));
  Config::Connect("/NodeList/*/DeviceList/*/$ns3::NrUeNetDevice/ComponentCarrierMapUe/*/NrUePhy/NrSpectrumPhyList/*/ChannelOccupied", MakeCallback(&nrNodeState));
}

void
txTracker::insert11pNodes (std::vector<std::string> nodes, double bandWidth, double txPower)
{
  for (auto n : nodes)
    {
      m_txMap11p[n] = txParameters11p {
        std::tuple<double, double> {bandWidth, txPower},
            false
      };
    }
}

void
txTracker::insertNrNodes (std::vector<std::string> nodes)
{
  for (auto n : nodes)
    {
      m_txMapNr[n] = txParametersNR {
        std::unordered_map<uint8_t, std::tuple<double, double, double>>{},
            Time(0.0),
            false
      };
    }
}

txTracker::txTracker () = default;

txTracker::~txTracker () = default;
}
