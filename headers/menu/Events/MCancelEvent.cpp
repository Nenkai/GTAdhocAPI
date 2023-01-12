using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a cancelled/return event (for onCancel() ). 
	\details onCancel() is usually fired when the user backs out - they press the back button. */
	public class MCancelEvent : public MWidgetEvent
	{
		public:
			MCancelEvent(MRenderContext context, MWidget widget) { }
	};
};
