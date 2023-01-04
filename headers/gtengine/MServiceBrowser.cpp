using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief DNS Service Browser */
	class MServiceBrowser : public Object
	{
		  public:
		    MServiceBrowser();

			Bool initialize();

			/** 
			\param service Service.
			\param unk Unknown.
			\param callback args provided, with [context, requestId, service] 
			*/
			void browseRequest(MSdService service, String unk = nil, FunctionObject<Object> callback = nil);

			Array<MSdService> getServiceList();

			void clearCallback();

			void setContinuousMode(Bool enabled);
    }
}