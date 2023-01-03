using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class LicenseConditionData
	{
		  public:
			Int use_basic_finish;
			Int stop_on_finish;
			LicenseDisplayModeType display_mode;
			LicenseConditionData finish_condition;
			LicenseConditionData failure_condition;
			LicenseConditionData success_condition;
			Bool isDefault();

    }		
}