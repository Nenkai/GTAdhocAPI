namespace gtengine
{
    enum class ServiceType
	{
        Unknown = 0, /*!< 0 */

        /** 1
        \details Provides a TinyWeb module for unknown data at /toyota86/ */
        Toyota86 = 1,

        /** 2
        \details Provides basic telemetry data access via Udp on Port 33339 */
        SimpleUdp = 2, 
        
        /** 3
        \details Provides a TinyWeb module for telemetry data over websockets at /wssample/ */
        WSSample = 3, 

        /** 4
        \details Provides a TinyWeb module for live timing data at /livetiming/ 
        Documented in PDTools.LiveTimingApi (only endpoint is different for GTS/7) */
        LiveTiming = 4,

        /** 5
        \details Stubbed. */
        MultiDebug = 5,

        /** 6
        \details Stubbed. */
        GTFrameworkDebug = 6,

        /** 7
        \details Provides data for motion simuators at port 33339 
        Documented in PDTools.SimulatorInterface */
        SimulatorInterface = 7, /*!< 7 */
	};
}