using namespace System;

namespace pdistd
{
	class MProgress : public Object
	{
		public:

			MProgress() { };

			void setRange();
			Object offset;
			Object value;
			Object constant_progress_speed;
			void complete();
			void getRemainSecond();
			void wrap();
			void updateEta();
	}
}