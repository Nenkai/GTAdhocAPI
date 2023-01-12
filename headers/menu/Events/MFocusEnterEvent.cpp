using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a widget focused event (for onFocusEnter() ). 
	\details onFocusEnter() is fired when the user focuses on a widget. */
	public class MFocusEnterEvent : public MCrossingEvent
	{
		public:
			MFocusEnterEvent(MRenderContext context, MWidget widget) { };
	};
};
