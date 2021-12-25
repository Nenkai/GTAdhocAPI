using namespace System;

namespace pdistd
{
	class MPDINetworkUserProfile : public Object
	{
		public:

			MPDINetworkUserProfile() { };

			void deepCopy();
			void isMe();

			String name;
			UInt userNumber;
			String countryCode;

	}
}