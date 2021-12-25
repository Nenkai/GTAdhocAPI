using namespace System;

namespace pdistd
{
	class MPipe : public Object
	{
		public:

			MPipe() { };

			void size();
			void put();
			void get();
			void clear();
			
	}
}