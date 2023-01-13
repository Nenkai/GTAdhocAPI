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

			/** @brief Constructs a focus enter event from the specified render context and widget. */
			MFocusEnterEvent(MRenderContext context, MWidget widget) { };
	};
};
