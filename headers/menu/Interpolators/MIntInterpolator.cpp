using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a integer interpolator .*/
	public class MIntInterpolator : public MInterpolator
	{
		public:
            /** @brief constructor taking no param */
            MIntInterpolator() { };

            Int start_value;
			Int end_value;

			Int getStartValue();
			void setStartValue(Int start);
			Int getEndValue();
			void setEndValue(Int end);

                  
	};
};
