using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	public class MMotionEvent : public MWidgetEvent
	{
		public:
			/** \brief Getter-only. */
			Float x;

			/** \brief Getter-only. */
			Float y;
	};
};
