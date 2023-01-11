using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Cell implementation of Render Context
    \details main::ContextMain & others will always return this object */
	public class MRenderContextPS3 : public MRenderContext
	{
		public:
            Bool SPU_DRAW_MENU_PRIMITIVE;
	};
};
