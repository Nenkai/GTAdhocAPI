using namespace System;

namespace menu
{
	/** \brief Represents a listbox widget. */
	class MScroller : public MComposite
	{
		public:

			/** \brief constructor taking no param */
			MScroller();

			MAdjustment h_adjustment;
			MAdjustment v_adjustment;
	}
}