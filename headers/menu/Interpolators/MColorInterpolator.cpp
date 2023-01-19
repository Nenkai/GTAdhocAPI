using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a color interpolator .*/
	public class MColorInterpolator : public MInterpolator
	{
		public:
            /** @brief constructor taking no param */
            MColorInterpolator() { };

            MColorObject start_value;
			MColorObject end_value;

			MColorObject getStartValue();
			void setStartValue(MColorObject start);
			MColorObject getEndValue();
			void setEndValue(MColorObject end);

                  
	};
};
