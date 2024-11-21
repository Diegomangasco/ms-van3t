//
// Created by diego on 20/11/24.
//

#ifndef NS3_TXTRACKER_H
#define NS3_TXTRACKER_H

#include "ns3/object.h"
#include <string>
#include <vector>
#include <unordered_map>
#include <variant>
#include "ns3/config.h"
#include "ns3/nstime.h"
#include "ns3/wifi-phy-state.h"
#include "ns3/callback.h"
#include "ns3/simulator.h"

// TODO add the numerology information (Bandwidth for 11p) (Bandwidth, RB numbers, subcarrier width (1RB = 12 suncarriers) for NR)
// TODO add the nrHelper to get the spectrum tx information
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

  typedef struct txParameters11p{
    // (maxBand, txPower)
    std::tuple<double, double> txBandsPower;
    bool isTransmitting;
  } txParameters11p;

  typedef struct txParametersNR {
    // Key: RB index, Value: (minBand, maxBand, txPower)
    std::unordered_map<uint8_t, std::tuple<double, double, double>> txPowerPerRB;
    Time txDuration;
    bool isTransmitting;
  } txParametersNR;

  static TypeId GetTypeId(void);
  /**
   * \brief Default constructor
   *
   */
  txTracker ();
  ~txTracker();

  static void insert11pNodes(std::vector<std::string> nodes, double bandWidth, double txPower);
  static void insertNrNodes(std::vector<std::string> nodes);

  void startTracking();

private:

};
}

#endif //NS3_TXTRACKER_H
