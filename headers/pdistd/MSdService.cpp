using namespace System;

namespace pdistd
{
	class MSdService : public Object
	{
		public:

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