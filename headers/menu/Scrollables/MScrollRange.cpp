using namespace System;

namespace menu
{
	/** \brief Base scroll range. */
	class MScrollRange : public MScroller
	{
		public:
			MAdjustment adjustment;

			/** \brief Scroll spacing. Defaults to 0.0. */
			Float spacing;
	}
}