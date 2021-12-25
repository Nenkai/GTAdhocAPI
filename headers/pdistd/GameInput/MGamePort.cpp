using namespace System;

namespace pdistd
{
	class MGamePort : public Object
	{
		public:
		
			void update();
			String port_name;
			Object analog;
			Object button;
			Object data;

			static void GetWheelAssignMode();
			static void SetWheelAssignMode();
			static void GetNoDeadZone();
			static void SetNoDeadZone();
	}
}