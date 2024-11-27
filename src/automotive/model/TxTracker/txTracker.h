//
// Created by diego on 20/11/24.
//

#ifndef NS3_TXTRACKER_H
#define NS3_TXTRACKER_H

#include <string>
#include <vector>
#include <unordered_map>
#include "ns3/epc-helper.h"
#include "ns3/nstime.h"
#include "ns3/wifi-phy-state.h"
#include "ns3/wifi-phy.h"
#include "ns3/wifi-net-device.h"
#include "ns3/callback.h"
#include "ns3/simulator.h"
#include "ns3/nr-spectrum-phy.h"
#include "ns3/net-device.h"
#include "ns3/ptr.h"
#include "ns3/nr-ue-phy.h"
#include "ns3/nr-ue-net-device.h"
#include "ns3/node.h"
#include "ns3/config.h"
#include "ns3/sionna_handler.h"

namespace ns3 {

/**
 * \ingroup automotive
 *
 * \brief This class implements the Tracker for nodes that use the channel at a certain moment
 *
 * This class provides capabilities for tracking the nodes that are using the channel at a certain moment
 */
class txTracker : public Object
{
public:

  enum TxType {
    WIFI,
    NR
  };

  typedef struct txParameters11p{
    uint8_t nodeID;
    // (maxBand, txPower)
    // std::tuple<double, double> txBandsPower;
    Ptr<WifiNetDevice> netDevice;
    double bandwidth;
    double txPower_W;
    bool isTransmitting;
  } txParameters11p;

  typedef struct txParametersNR {
    uint8_t nodeID;
    // Value: (minBand, maxBand, txPower)
    // std::vector<std::tuple<double, double, double>> txBandsPower;
    Ptr<NrUeNetDevice> netDevice;
    Ptr<SpectrumValue> txSpectrum;
    double rbBandwidth;
    bool isTransmitting;
    // double txTotalPower;
  } txParametersNR;

  static TypeId GetTypeId(void);
  /**
   * \brief Default constructor
   *
   */
  txTracker ();
  ~txTracker();

  void SetTracker(Ptr<txTracker> txTracker);

  static void insert11pNodes(std::vector<std::tuple<std::string, uint8_t, Ptr<WifiNetDevice>>> nodes);
  static void insertNrNodes (std::vector<std::tuple<std::string, uint8_t, Ptr<NrUeNetDevice>>> nodes);

  void startTracking();

  static std::pair<std::unordered_map<std::string, std::tuple<double, double>>, std::unordered_map<std::string, std::tuple<double, Ptr<SpectrumValue>>>> getTxMap();

private:

};
}

#endif //NS3_TXTRACKER_H
