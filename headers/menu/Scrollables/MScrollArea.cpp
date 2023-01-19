using namespace System;

namespace pdistd
{
	/** \brief Base scroll area. */
	class MScroller : public MComposite
	{
		public:
			Int inner_pad_left;
			Int inner_pad_right;
			Int inner_pad_top;
			Int inner_pad_bottom;

			/** \brief Typo is intended. */
			Int h_scacing;

			/** \brief Typo is intended. */
			Int v_scacing;
	}
}