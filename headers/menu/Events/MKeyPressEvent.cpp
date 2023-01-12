using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a key pressed event (for onKeyPress() ). 
	\details onKeyPress() is usually fired when the user hits any key. 
	The event fires every 0.1s. */
	public class MKeyPressEvent : public MKeyEvent
	{
		public:
			MKeyPressEvent(MRenderContext context, MWidget widget,
				Int keysym, Int port_data, Float unk, Float unk2, 
				Int repeat) { };

			/** \brief Getter-only. */
			Int repeat;
	};
};
