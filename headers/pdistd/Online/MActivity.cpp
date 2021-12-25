using namespace System;

namespace pdistd
{
	class MActivity : public Object
	{
		public:

			MActivity() { };

			void clearCallback();
			void requestPutActivity();
			void requestGetActivity();
			void decodeActivityList();
	}
}