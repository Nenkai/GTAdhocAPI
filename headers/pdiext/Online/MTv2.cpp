using namespace System;

namespace pdistd
{
	/** \brief GTTV API Handler */
	class MTv2 : public Object
	{
		public:
			/** \brief constructor taking no param */
			MTv2() { };

			void initialize();
			void clearCallback();
			void requestTv();
			void decodeTv();
			void decodeContentsKey();
	}
}