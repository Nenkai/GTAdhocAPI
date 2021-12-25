using namespace System;

namespace pdistd
{
	class MSns : public Object
	{
		public:

			MSns() { };

			static void CreateInstance();
			void initialize();
			void finalize();
			void isInitialized();
			void isEnabled();
			void setApplicationId();
			void getAccessToken();
			void post();

	}
}