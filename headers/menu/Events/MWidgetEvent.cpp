using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Base Widget Event. */
	public class MWidgetEvent : public MNodeEvent
	{
		public:

			/** \brief Getter-only. Gets the widget associated with this event. */
			MWidget widget;
	};
};
