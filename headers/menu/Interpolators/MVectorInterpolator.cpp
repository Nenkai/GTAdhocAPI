using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a vector interpolator .*/
	public class MVectorInterpolator : public MInterpolator
	{
		public:
            /** @brief constructor taking no param */
            MVectorInterpolator() { };

            Array<Float> start_value;
			Array<Float> end_value;

			Array<Float> getStartValue();
			void setStartValue(Array<Float> start);
			Array<Float> getEndValue();
			void setEndValue(Array<Float> end);

                  
	};
};
