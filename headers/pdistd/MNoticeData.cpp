using namespace System;

namespace pdistd
{
	class MNoticeData : public Object
	{
		public:
		
			MNoticeData() { };

			Object type;
            Object title;
            Object body;
            Object time;
            Object isLocalized;
            Object args;
	}
}