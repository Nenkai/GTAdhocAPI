using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Base Box widget, allowing widgets within it to be packed. */
	public class MBox : public MComposite
	{
		public:
			/** \brief Padding on the left. Defaults to 0. */
			Int inner_pad_left;

			/** \brief Padding on the right. Defaults to 0. */
			Int inner_pad_right;

			/** \brief Padding at the top. Defaults to 0. */
			Int inner_pad_top;

			/** \brief Padding at the bottom. Defaults to 0. */
			Int inner_pad_bottom;
	};
};
