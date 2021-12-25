using namespace System;

namespace pdistd
{
	class MWorker : public Object
	{
		public:

			MWorker() { };

			Bool done;
			Object result;
	}
}