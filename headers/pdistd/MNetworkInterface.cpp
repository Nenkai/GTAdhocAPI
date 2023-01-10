using namespace System;

namespace pdistd
{
	/** \brief Interface for getting network connection status & details */
	class MNetworkInterface : public Object
	{
		public:

			/** \brief Gets link connection state
			\details cellNetCtlGetInfo(LINK) */
			static Bool isCableConnected();

			/** \brief Whether we are connected to internet
			\details cellNetCtlGetState() >= 3 */
			static Bool isUp();

			/** \brief Gets current IP Address
			\details cellNetCtlGetInfo(IP_ADDRESS) */
			static String getIpAddress();

			/** \brief Gets MAC Address
			\details cellNetCtlGetInfo(MAC_ADDRESS)
			\returns String if as_ulong is not provided */
			static Object getMacAddress(Bool as_ulong = false);

			/** \brief Gets current IP Address
			\details cellNetCtlGetInfo(DEVICE) == CELL_NET_CTL_DEVICE_WIRELESS */
			static Int isDeviceWireless();

			/** \brief Stubbed, always returns 0 */
			static Bool isWirelessSwitchOn();

			/** \brief Gets IP Config 
			\details cellNetCtlGetInfo(IP_CONFIG)
			\returns 
			- "dhcp" - CELL_NET_CTL_IP_DHCP 
			- "static" - CELL_NET_CTL_IP_STATIC 
			- "pppoe" - CELL_NET_CTL_IP_PPPOE 
			- "unknown" - for anything else */
			static String getConfig();

			/** \brief Gets proxy settings
			\details cellNetCtlGetInfo(HTTP_PROXY_CONFIG), cellNetCtlGetInfo(HTTP_PROXY_SERVER), cellNetCtlGetInfo(HTTP_PROXY_PORT) 
			\returns Array with elements:
			- [0] Enabled (Bool)
			- [1] Server (String)
			- [2] Port (Int) */
			static Array getProxy();


			/** \brief Gets NAT information
			\details cellNetCtlGetNatInfo()
			\returns Map with elements:
			- "address" - (String)
			- "nat" - (Int)
			- "stun" - (Int)
			- "upnp" - (Int) */
			static Map getNatInfo();

			/** \brief Gets whether UPnP is enabled
			\details cellNetCtlGetInfo(UPNP_CONFIG) == CELL_NET_CTL_UPNP_ON */
			static Bool getUPnPConfig();

			/** \brief Stubbed. */
			static void enableLinkDownSimulation(Int unk);

			/** \brief Stubbed. */
			static void disableLinkDownSimulation();
	}
}