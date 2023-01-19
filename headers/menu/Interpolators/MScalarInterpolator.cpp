using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a scalar value interpolator .*/
	public class MScalarInterpolator : public MInterpolator
	{
		public:
            /** @brief constructor taking no param */
            MScalarInterpolator() { };

            Float start_value;
			Float end_value;

			Float getStartValue();
			void setStartValue(Float start);
			Float getEndValue();
			void setEndValue(Float end);

                  
	};
};
