using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Base Box */
	public class MBox : public MComposite
	{
		public:
			Int inner_pad_left;
			Int inner_pad_right;
			Int inner_pad_top;
			Int inner_pad_bottom;
	};
};
