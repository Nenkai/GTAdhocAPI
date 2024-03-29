using namespace System;

namespace pdistd
{
	/** \brief General object representing task progress
	\details Needs more documentation, couldn't get getRemainSecond not to return -1 or 0 after complete() */
	class MProgress : public Object
	{
		public:

			/** \brief constructor taking no param */
			MProgress() { };

			void setRange();
			Float offset;

			/** \return Current progress, 0.0 to 1.0 */
			Float value;

			Float constant_progress_speed;

			/** \brief Mark as complete */
			void complete();

			Int getRemainSecond();
			void wrap();
			void updateEta();
	}
}