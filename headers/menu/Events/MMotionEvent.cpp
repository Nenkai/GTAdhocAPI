using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/* \brief Mouse motion events (mouse move). */
	public class MMotionEvent : public MWidgetEvent
	{
		public:
			/** \brief Mouse position X. Getter-only. */
			Float x;

			/** \brief Mouse position Y. Getter-only. */
			Float y;
	};
};
