using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a face color interpolator .*/
	public class MFaceColorInterpolator : public MInterpolator
	{
		public:
            /** @brief constructor taking no param */
            MFaceColorInterpolator() { };

            Array<Int> start_value;
			Array<Int> end_value;

			Array<Int> getStartValue();
			void setStartValue(Array<Int> start);
			Array<Int> getEndValue();
			void setEndValue(Array<Int> end);

                  
	};
};
