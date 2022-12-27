using namespace System;
using namespace gtengine;

namespace pdistd
{
	class MNoticeData : public Object
	{
		public:
		
			MNoticeData() { };

			NoticeType type;
            String title;
            String body;
            Long time;
            Bool isLocalized;
            Array args;
	}
}