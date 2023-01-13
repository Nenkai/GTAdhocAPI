using namespace System;

namespace pdiext
{
	/** \brief Represents an http request */
	class MHttpRequest : public Object
	{
		public:
			/** \brief constructor taking no param */
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