using namespace System;
using namespace gtengine;

namespace pdistd
{
	class MNoticeList : public Object
	{
		public:
		
			MNoticeList() { };

			void clear();
			MNoticeData addNotice(NoticeType type, String title, String message, Long time, Bool isLocalized, Array args = nil);
			MNoticeData getNotice(Int index);
			void getNoticeByType(gtengine::NoticeType::RoomChat);
			UInt getCount();
			Array checkLifetime();
			
	}
}