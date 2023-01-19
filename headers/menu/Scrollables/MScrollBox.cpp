using namespace System;

namespace pdistd
{
	/** \brief Scroll box. */
	class MScrollBox: public MFBox
	{
		public:
			/** \brief constructor taking no param */
			MScrollBox() { };

			Float getVolumeRatio();
			MAdjustment adjustment; 

			/** \brief Display policy. Defaults to "always".
			\details Available options:
			- "always"
			- "automatic"
			- "never"
			*/
			String display_policy;
	}
}