using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a vector 3 interpolator .*/
	public class MVector3Interpolator : public MInterpolator
	{
		public:
            /** @brief constructor taking no param */
            MVector3Interpolator() { };

            Array<Float> start_value;
			Array<Float> end_value;

			Array<Float> getStartValue();
			void setStartValue(Array<Float> start);
			Array<Float> getEndValue();
			void setEndValue(Array<Float> end);

                  
	};
};
