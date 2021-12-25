using namespace System;

namespace pdistd
{
	class MPDINetworkUserId : publicObject
	{
		public:

			MPDINetworkUserId() { };

			void deepCopy();
			void isMe();

			String name;
			UInt userNumber;
	}
}