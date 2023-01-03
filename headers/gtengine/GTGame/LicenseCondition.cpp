using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class LicenseCondition
	{
		  public:
			LicenseCheckType check_type;
			LicenseConditionType condition;
			LicenseResultType result_type;
			Float float_value;
			UInt uint_value;
			Int int_value;

    }		
}