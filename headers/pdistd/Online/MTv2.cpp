using namespace System;

namespace pdistd
{
	class MTv2 : public Object
	{
		public:

			MTv2() { };

			void initialize();
			void clearCallback();
			void requestTv();
			void decodeTv();
			void decodeContentsKey();
	}
}