/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2006,2007 INRIA
 *
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
 *
 * Author: Mathieu Lacage, <mathieu.lacage@sophia.inria.fr>
 */

#include "ns3/simulator.h"
#include "ns3/log.h"
#include "ns3/pointer.h"
#include "ns3/wifi-net-device.h"
#include "ns3/node.h"
#include "ns3/propagation-loss-model.h"
#include "ns3/propagation-delay-model.h"
#include "ns3/mobility-model.h"
#include "yans-wifi-channel.h"
#include "yans-wifi-phy.h"
#include "wifi-utils.h"
#include "wifi-ppdu.h"
#include "wifi-psdu.h"
#include "ns3/constant-position-mobility-model.h"
#include "ns3/txTracker.h"

namespace ns3 {

NS_LOG_COMPONENT_DEFINE ("YansWifiChannel");

NS_OBJECT_ENSURE_REGISTERED (YansWifiChannel);

TypeId
YansWifiChannel::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::YansWifiChannel")
                          .SetParent<Channel> ()
                          .SetGroupName ("Wifi")
                          .AddConstructor<YansWifiChannel> ()
                          .AddAttribute ("PropagationLossModel", "A pointer to the propagation loss model attached to this channel.",
                                         PointerValue (),
                                         MakePointerAccessor (&YansWifiChannel::m_loss),
                                         MakePointerChecker<PropagationLossModel> ())
                          .AddAttribute ("PropagationDelayModel", "A pointer to the propagation delay model attached to this channel.",
                                         PointerValue (),
                                         MakePointerAccessor (&YansWifiChannel::m_delay),
                                         MakePointerChecker<PropagationDelayModel> ())
      ;
  return tid;
}

YansWifiChannel::YansWifiChannel ()
{
  NS_LOG_FUNCTION (this);
}

YansWifiChannel::~YansWifiChannel ()
{
  NS_LOG_FUNCTION (this);
  m_phyList.clear ();
}

void
YansWifiChannel::SetPropagationLossModel (const Ptr<PropagationLossModel> loss)
{
  NS_LOG_FUNCTION (this << loss);
  m_loss = loss;
}

void
YansWifiChannel::SetPropagationDelayModel (const Ptr<PropagationDelayModel> delay)
{
  NS_LOG_FUNCTION (this << delay);
  m_delay = delay;
}

void
YansWifiChannel::Send (Ptr<YansWifiPhy> sender, Ptr<const WifiPpdu> ppdu, double txPowerDbm) const
{
  NS_LOG_FUNCTION (this << sender << ppdu << txPowerDbm);
  Ptr<MobilityModel> senderMobility = sender->GetMobility ();
  NS_ASSERT (senderMobility != 0);
  for (PhyList::const_iterator i = m_phyList.begin (); i != m_phyList.end (); i++)
    {
      if (sender != (*i))
        {
          //For now don't account for inter channel interference nor channel bonding
          if ((*i)->GetChannelNumber () != sender->GetChannelNumber ())
            {
              continue;
            }

          Ptr<MobilityModel> receiverMobility = (*i)->GetMobility ()->GetObject<MobilityModel> ();
          Time delay = m_delay->GetDelay (senderMobility, receiverMobility);
          double rxPowerDbm = m_loss->CalcRxPower (txPowerDbm, senderMobility, receiverMobility);
          NS_LOG_DEBUG ("propagation: txPower=" << txPowerDbm << "dbm, rxPower=" << rxPowerDbm << "dbm, " <<
                        "distance=" << senderMobility->GetDistanceFrom (receiverMobility) << "m, delay=" << delay);
          Ptr<WifiPpdu> copy = ppdu->Copy ();
          Ptr<NetDevice> dstNetDevice = (*i)->GetDevice ();
          uint32_t dstNode;
          if (dstNetDevice == 0)
            {
              dstNode = 0xffffffff;
            }
          else
            {
              dstNode = dstNetDevice->GetNode ()->GetId ();
            }

          std::unordered_map<std::string, std::pair<RxPowerWattPerChannelBand, Time>> noisePowerPerNode;
          double interferencePower = 0.0;
          for (auto it = m_txMapNr.begin(); it != m_txMapNr.end(); ++it)
            {
              Ptr<NrUePhy> nrPhy = it->second.netDevice->GetPhy(0);
              NrSpectrumPhy::State current_state = nrPhy->GetSpectrumPhy ()->GetState();
              if (current_state == NrSpectrumPhy::State::TX)
                {
                  Ptr<SpectrumValue> spectrum = nrPhy->GetSpectrumPhy ()->GetTxPowerSpectralDensity();
                  double rbBandwidth = m_txMapNr.begin()->second.rbBandwidth;
                  uint8_t j = 1;
                  for (auto it2 = spectrum->ValuesBegin(); it2 != spectrum->ValuesEnd(); ++it2)
                    {
                      if (j * rbBandwidth > sender->GetChannelWidth() * 1e6)
                        {
                          break;
                        }
                      if ((*it2) > 0)
                        {
                          interferencePower += (*it2) * rbBandwidth;
                        }
                      j += 1;
                    }
                  if (interferencePower > 0.0)
                    {
                      Ptr<MobilityModel> interferenceMobility = it->second.netDevice->GetNode()->GetObject<ConstantPositionMobilityModel>();
                      Time interferenceDelay = m_delay->GetDelay (interferenceMobility, receiverMobility);
                      double interferenceRxPowerDbm = m_loss->CalcRxPower(WToDbm (interferencePower), interferenceMobility, receiverMobility);
                      RxPowerWattPerChannelBand rxInterference = RxPowerWattPerChannelBand ();
                      rxInterference.insert({std::make_pair (0, 0), DbmToW (interferenceRxPowerDbm)});
                      noisePowerPerNode[it->first] = std::make_pair (rxInterference, interferenceDelay);
                    }
                }
            }

          Simulator::ScheduleWithContext (dstNode,
                                          delay, &YansWifiChannel::Receive,
                                          (*i), copy, rxPowerDbm, noisePowerPerNode);
        }
    }
}

void
YansWifiChannel::Receive (Ptr<YansWifiPhy> phy, Ptr<WifiPpdu> ppdu, double rxPowerDbm, std::unordered_map<std::string, std::pair<RxPowerWattPerChannelBand, Time>> &noisePowerPerNode)
{
  NS_LOG_FUNCTION (phy << ppdu << rxPowerDbm);
  // Do no further processing if signal is too weak
  // Current implementation assumes constant RX power over the PPDU duration
  if ((rxPowerDbm + phy->GetRxGain ()) < phy->GetRxSensitivity ())
    {
      NS_LOG_INFO ("Received signal too weak to process: " << rxPowerDbm << " dBm");
      return;
    }
  if (!noisePowerPerNode.empty())
    {
      for (auto it = noisePowerPerNode.begin(); it != noisePowerPerNode.end(); ++it)
        {
          phy->GetInterferenceHelper()->AddForeignSignal (it->second.second, it->second.first);
        }
    }
  RxPowerWattPerChannelBand rxPowerW;
  rxPowerW.insert ({std::make_pair (0, 0), (DbmToW (rxPowerDbm + phy->GetRxGain ()))}); //dummy band for YANS
  phy->StartReceivePreamble (ppdu, rxPowerW, ppdu->GetTxDuration ());
}

std::size_t
YansWifiChannel::GetNDevices (void) const
{
  return m_phyList.size ();
}

Ptr<NetDevice>
YansWifiChannel::GetDevice (std::size_t i) const
{
  return m_phyList[i]->GetDevice ();
}

void
YansWifiChannel::Add (Ptr<YansWifiPhy> phy)
{
  NS_LOG_FUNCTION (this << phy);
  m_phyList.push_back (phy);
}

int64_t
YansWifiChannel::AssignStreams (int64_t stream)
{
  NS_LOG_FUNCTION (this << stream);
  int64_t currentStream = stream;
  currentStream += m_loss->AssignStreams (stream);
  return (currentStream - stream);
}

} //namespace ns3
