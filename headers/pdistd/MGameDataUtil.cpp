using namespace System;

namespace pdistd
{
	class MGameDataUtil : public Object
	{
		public:
		
			MGameDataUtil() { };

			void createGameData();
			void deleteGameData();
			void isExistGameData();
			void checkGameData();
			void convertGameData();
			Object needSizeKB;
	}
}