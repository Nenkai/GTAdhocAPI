using namespace System;

namespace menu
{
	/** \brief Represents a scrollable window. */
	class MScrollWindow : public MFBox
	{
		public:

			/** \brief constructor taking no param */
			MScrollWindow();

			void updateGeometry();

			void warp();

			/** \brief Defaults to 8.0. */
			Float scroll_pitch;

			/** \brief Defaults to 0. */
			Int scroll_mode;

			Int manualTargetIncX(Float unk);
			Int manualTargetIncY(Float unk);
	}
}