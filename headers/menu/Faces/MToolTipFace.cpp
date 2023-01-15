using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays a tooltip. */
	public class MToolTipFace : public MWidget, MTextSetting
	{
		public:

            /** @brief constructor taking no param */
            MToolTipFace() { };

            void attach();
			void remove();

			/** \brief Setter-only. */
			String key;

			/** \brief Text of this tool tip. If different from current, the tool tip will be reset and animation replayed. */
			String value;

			/** \brief Stubbed. */
			Object lock;

			/** \brief Sets how the tool tip behaves (Read details). Defaults to 1. 
			\details
			- 0: Slowly jumps from the bottom, then scrolls to the left, repeats.

			- 1: Jumps to normal position from the bottom, then stays there.
			     Otherwise if the text is longer than the screen can fit, the tool tip is scrolled to the left until the tool tip is out of the screen, then repeats from the start.

			- 2: Jumps to normal position from the bottom, then stays there.
				 Otherwise if the text is longer than the screen can fit, the tool tip is scrolled to the left until the end of the text can be seen, then the tooltip jumps to the bottom. Repeats from start.

			- 3: Scroll from right to left at a normal speed. 

			- 4: Same as 1, but scrolls to the left regardless of if the text fits or not.

			- 5: Starts aligned to the left, doesn't do anything if the text fits.
			     If the text doesn't fit, text endlessly scrolls from right to left.
			*/
			Int action_type;

			String localized_text_page;

			void resetAction();

			void Transient();

			MethodObject on_phase10_end;
			MethodObject on_phase12_end;

			/** \brief Whether to only show the tool tip once. Defaults to 0. */
			Int show_once;

			/** \brief Defaults to 0. */
			Int scroll_nowait;

			/** \brief Velocity. Defaults to 1.0. */
			Float velocity;

			/** \brief Whether the tool tip is currently scrolling. */
			Int isScrolling();
	};
};
