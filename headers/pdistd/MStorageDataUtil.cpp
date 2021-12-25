using namespace System;

namespace pdistd
{
	class MStorageDataUtil : public Object
	{
		public:
		
			MStorageDataUtil() { };

			void importStorageData();
			void exportStorageData();
			void moveStorageData();
	}
}