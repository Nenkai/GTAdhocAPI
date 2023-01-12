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
			MActivateEvent(MRenderContext context, MWidget widget) { }
	};
};
