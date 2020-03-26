#include "appClient-helper.h"

#include "ns3/appClient.h"
#include "ns3/uinteger.h"
#include "ns3/names.h"

namespace ns3 {

AppClientHelper::AppClientHelper ()
{
  m_factory.SetTypeId (appClient::GetTypeId ());
}


void 
AppClientHelper::SetAttribute (
  std::string name, 
  const AttributeValue &value)
{
  m_factory.Set (name, value);
}

ApplicationContainer
AppClientHelper::Install (Ptr<Node> node) const
{
  return ApplicationContainer (InstallPriv (node));
}

ApplicationContainer
AppClientHelper::Install (std::string nodeName) const
{
  Ptr<Node> node = Names::Find<Node> (nodeName);
  return ApplicationContainer (InstallPriv (node));
}

ApplicationContainer
AppClientHelper::Install (NodeContainer c) const
{
  ApplicationContainer apps;
  for (NodeContainer::Iterator i = c.Begin (); i != c.End (); ++i)
    {
      apps.Add (InstallPriv (*i));
    }

  return apps;
}

Ptr<Application>
AppClientHelper::InstallPriv (Ptr<Node> node) const
{
  Ptr<Application> app = m_factory.Create<appClient> ();
  node->AddApplication (app);

  return app;
}

} // namespace ns3