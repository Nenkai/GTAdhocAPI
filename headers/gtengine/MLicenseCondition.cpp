using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MLicenseCondition : public Object
	{
		  public:
		  	/** \brief constructor taking no param */
		    MLicenseCondition() { };

			LicenseCheckType check_type;
			LicenseConditionType condition;
			LicenseResultType connection;
			Float float_value;
			UInt uint_value;
			Int int_value;

    }		
}