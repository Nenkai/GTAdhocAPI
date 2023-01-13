using namespace System;
using namespace gtengine;

namespace pdistd
{
	class MNoticeData : public Object
	{
		public:
		
			/** \brief constructor taking no param */
			MNoticeData() { };

			NoticeType type;
            String title;
            String body;
            Long time;
            Bool isLocalized;
            Array args;
	}
}