using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Provides data/socket/web services for outside clients to access. */
	class MGTServiceManager
	{
		  public:
		    MGTServiceManager();

			void setOrganizer(MOrganizer organizer);

			Bool startUpdate();

			void stopUpdate();

			Int registerService(ServiceType type);

			void unregisterServiceById(Int id);

			void unregisterServiceByType(ServiceType type);
    }
}