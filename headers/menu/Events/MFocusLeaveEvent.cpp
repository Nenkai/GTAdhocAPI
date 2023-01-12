using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a widget unfocused event (for onFocusLeave() ). 
	\details onFocusLeave() is fired when the user leaves a selected widget. */
	public class MFocusLeaveEvent : public MCrossingEvent
	{
		public:
			MFocusLeaveEvent(MRenderContext context, MWidget widget) { };
	};
};
