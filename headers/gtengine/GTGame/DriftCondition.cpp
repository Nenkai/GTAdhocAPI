using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class DriftCondition
	{
		  public:
			DriftModeType drift_mode_type;
			Int launch_speed;
			Int launch_v;
			Int section;
			Bool isDefault();
    }		
}