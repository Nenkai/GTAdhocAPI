using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a boolean interpolator .*/
	public class MBoolInterpolator : public MInterpolator
	{
		public:
            /** @brief constructor taking no param */
            MBoolInterpolator() { };

            Bool start_value;
			Bool end_value;

			Bool getStartValue();
			void setStartValue(Bool start);
			Bool getEndValue();
			void setEndValue(Bool end);

                  
	};
};
