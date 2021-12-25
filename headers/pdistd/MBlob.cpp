using namespace System;

namespace pdistd
{
	class MBlob : public Object
	{
		public:
		
			MBlob() { };

			Int size;

			void reserve();
			void copyFromString();
			void operator==(){};
			void operator!=(){};

			Bool with_tsm;
			void referData();
			void glanceDump();
			void peek();
			
	}
}