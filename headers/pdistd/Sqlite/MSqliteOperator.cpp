using namespace System;

namespace pdistd
{
	class MSqliteOperator : public Object
	{
		public:
			void end();
			void next();
			void get();
	}
}