using namespace System;

namespace menu
{
	/** \brief Base scrollbar object. */
	class MScrollbar : public MScrollbar
	{
		public:

			MAdjustment adjustment;

			/** \brief Display policy. Defaults to "always".
			\details Available options:
			- "always"
			- "automatic"
			- "never" */
			String display_policy;

			/** \brief Defaults to false. */
			Bool homogeneous;

			/** \brief Defaults to 0. */
			Int spacing;
	}
}