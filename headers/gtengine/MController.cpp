using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MController : public Object
	{
		  public:
			MController();

			void declare(InputMode input_mode, String device_name, Int port, String analog_or_button, SuperPortButtonBit button_bit);
			void declare(InputMode input_mode, String device_name, Int port, String analog_or_button, SuperPortAnalogChannel analog_channel);
			Map getConfig();
			void setConfig(Map config, Int unk = 0);

			static Int getVibration(Int unk);
			static void setVibration(Int unk, Int vibration_enabled);
			static Int getFFBrise(Int unk);
			static void setFFBrise(Int unk, Int rise);
			static Int getFFBlevel(Int unk);
			static void setFFlevel(Int unk, Int level);
			static Int getFFBassist(Int unk);
			static void setFFassist(Int unk, Int assist_enabled);

    }
}