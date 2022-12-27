using namespace System;

namespace pdistd
{
	class MSqliteOperator : public Object, IIterator
	{
		public:
			void end();
			void next();
			void get();
	}
}