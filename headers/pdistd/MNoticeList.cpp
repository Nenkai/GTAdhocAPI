using namespace System;

namespace pdistd
{
	class MNoticeList : public Object
	{
		public:
		
			MNoticeList() { };

			void clear();
			void addNotice();
			void getNotice();
			void getNoticeByType();
			void getCount();
			void checkLifetime();
			
	}
}