using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that allows text input. */
	public class MInputTextFace : public MWidget, MTextSetting
	{
		public:

            /** @brief constructor taking no param */
            MInputTextFace() { };

            /** \brief Input mode. Defaults to "normal."
            \details Available options:
            - "normal"
            - "alphabet"
            - "username"
            - "password"
            - "hostname"
            - "ipaddr"
            - "shell"
            - "ten_key" */
            String input_mode;

            /** \brief Value. May crash if the widget is uninitialized while accessing this attribute. */
            String value;

            /** \brief Getter-only. */
            String sanitized_value;

            /** \brief Max text length. Defaults to -1. */
            Int max_input_length;

            void putString(String str);
            void backspace();
            void delete();
            void left();
            void right();

            /** \brief Same as input_mode. */
            String mode;

            /** \brief Stubbed. */
            void openOSK();

            /** \brief Stubbed. */
            Object separate_mode;
	};
};
