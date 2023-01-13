using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents an activation event (for onActivate() ). 
	\details onActivate() is usually fired when the user presses OK. */
	public class MActivateEvent : public MWidgetEvent
	{
		public:

			/** @brief Constructs an activate event from the specified render context and widget. */
			MActivateEvent(MRenderContext context, MWidget widget) { }
	};
};
