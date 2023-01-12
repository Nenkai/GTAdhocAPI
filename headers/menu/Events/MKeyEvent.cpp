using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Key Event */
	public class MKeyEvent : public MWidgetEvent
	{
		public:
			MKeyEvent(MRenderContext context, MWidget widget,
				Int keysym, Int port_data, Float unk, Float unk2) { };

			/** \brief Getter-only. Gets the root window associated to this event. */
			MRootWindow root_window;

			/** \brief Keycode of the key pressed. */
			Int keysym;

			/** \brief State of the port as bit flags (keys that are being pressed) 
			\details Flags:
			- 0x10 is unknown
			- 0x200 is right stick. */
			Int port_state;

			/** \brief Getter-only. Port number. */
			Int port_number;

			/** \brief Same as port_state. */
			Int state;

			/** \brief Getter-only. Same as port_number. */
			Int port;
	};
};
