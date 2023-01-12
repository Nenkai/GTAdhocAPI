using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief DNS Service Publisher */
	class MServicePublisher : public Object
	{
		  public:
		    MServicePublisher() { };

			/** \param name If not provided, uses ps3-<mac address> as name*/
			Bool initialize(String name = nil);

			void finalize();

			Bool publish(MSdService service);

			Bool remove(MSdService service);

			Bool updateDescription(MSdService service);

			/** \param name Must be "LanParty" (Port 0) or "MultiDisplay" (Port 18687)*/
			MSdService createServiceConfig(String name = nil); 
    }
}