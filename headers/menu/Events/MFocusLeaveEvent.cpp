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

			/** @brief Constructs a focus leave event from the specified render context and widget. */
			MFocusLeaveEvent(MRenderContext context, MWidget widget) { };
	};
};
