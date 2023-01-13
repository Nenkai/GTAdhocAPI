using namespace System;

namespace pdistd
{
	class MWorker : public Object
	{
		public:

			/** \brief constructor taking no param */
			
			MWorker() { };

			Bool done;
			Object result;
	}
}