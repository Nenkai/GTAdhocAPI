using namespace System;

namespace pdistd
{
	/** \brief DNS Service Discovery Service */
	class MSdService : public Object
	{
		public:

			/** \brief constructor taking no param */
			MSdService() { };

			Int port;
			String name;
			String instanceName;
			String serviceName;
			Object protocol;
			Object address;
			String hostName;
			String txt;

			void computeKVHash();
			void isFalsified();
	}
}