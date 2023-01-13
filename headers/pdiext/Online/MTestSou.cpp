using namespace System;

namespace pdistd
{
	class MTestSou : public Object
	{
		public:
			/** \brief constructor taking no param */
			MTestSou() { };

			void clearCallback();
			void getSomething();
			void decodeSomething();
	}
}