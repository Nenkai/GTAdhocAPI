using namespace System;

namespace pdistd
{
	class MHttpRequest : public Object
	{
		public:

			MHttpRequest() { };

			void isDone();
			void isError();
			void abort();
			void isUpdated();
			void getStatus();
			void getState();
			void getProgress();
			void getLastError();
			void getLastErrorById();
			operator==() { };
			operator!=() { };
	}
}