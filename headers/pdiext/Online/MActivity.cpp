using namespace System;

namespace pdistd
{
	/** \brief Activity API Handler */
	class MActivity : public Object
	{
		public:
			/** \brief constructor taking no param */
			MActivity() { };

			void clearCallback();
			void requestPutActivity();
			void requestGetActivity();
			void decodeActivityList();
	}
}