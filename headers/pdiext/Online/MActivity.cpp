using namespace System;

namespace pdistd
{
	/** \brief Activity API Handler */
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