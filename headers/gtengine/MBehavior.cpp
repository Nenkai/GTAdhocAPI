using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MBehavior : public Object
	{
		  public:
		    static void switchBetaBehavior(Int bit_flags);

			static const Int WORLD_PARAMETER_SOURCE = 101;
			static const Int HID_PARAMETER_SOURCE = 102;
			static const Int MEASURED_TIRE_PARAMETER = 103;

			static void modifyGlobalParameter(Int source, Int unk, Int unk2, Int unk3);
    }
}