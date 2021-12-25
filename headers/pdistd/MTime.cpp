using namespace System;

namespace pdistd
{
	class MTime : public Object
	{
		public:

			MTime() { };

			Object racetime1000;
			Int year;
			Int month;
			Int day;
			Int hour;
			Int minute;
			Int second;

			void ctime();
			void toLocal();
			void toGMT();
			void getBySecond();
			void setBySecond();
			void setTimeFromMinutes();
			void getLocaleString();
			void setForCourse();

			static void getCurrentTime();
			static void getDifferenceOfDay();

			Object dow;

			operator==() { };
			operator!=() { };
			operator<() { };
			operator<=() { };
			operator>() { };
			operator>=() { };
	}
}