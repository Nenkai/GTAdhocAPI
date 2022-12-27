using namespace System;

namespace pdistd
{
	class MGamePort : public Object
	{
		public:
		
			void update();
			
			String port_name;

			/** \brief Getter-only. */
			MGameAnalogInput analog;

			/** \brief Getter-only */
			MGameAnalogButton button;

			/** \brief Getter-only. Crashes when fetched, do not use */
			MGameAnalogButton data;

			static WheelAssignMode GetWheelAssignMode();
			static void SetWheelAssignMode(WheelAssignMode mode);
			static Bool GetNoDeadZone();
			static void SetNoDeadZone(Bool noDeadZone);
	}
	
}