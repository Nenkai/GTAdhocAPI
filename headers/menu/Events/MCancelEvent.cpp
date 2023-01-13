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

			/** @brief Constructs an cancel event from the specified render context and widget. */
			MCancelEvent(MRenderContext context, MWidget widget) { }
	};
};
