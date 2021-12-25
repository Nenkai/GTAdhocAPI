using namespace System;

namespace pdistd
{
	class MHttp3 : public Object
	{
		public:

			MHttp3() { };

			static void init();
			static void end();
			static void formUrlEncode();
			static void formUrlDecode();
			static void postByteData();
	}
}