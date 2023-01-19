using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Base interpolator .*/
	public class MInterpolator : public MActor
	{
		public:
            String attribute_name;

			/** \brief Operation type. Defaults to "replace".
			\details Available options:
			- "replace"
			- "add"
			- "multiply" */
			String operation_type_name;

			/** \brief Loop count. Defaults to 0. */
            Int loop_count;

			/** \brief Start delay. Defaults to 0.0. */
            Float start_delay;

			/** \brief End delay. Defaults to 0.0. */
            Float end_delay;

			/** \brief Defaults to false. */
            Bool use_sync_timer;

			/** \brief Defaults to 0.0. */
			Float total_time;

			Float time;
			Float ramain_time;

			/** \brief Defaults to 0. */
			Int section_count;

			Float getStartDuration(Int index);
			void setStartDuration(Int index, Float duration);
			Float getEndDuration(Int index);
			void setEndDuration(Int index, Float duration);
			Float getInterpolationPeriod(Int index);
			void setInterpolationPeriod(Int index, Float value);
			Float getTension(Int index);
			void setTension(Int index, Float value);
			Float getSlope(Int index);
			void setSlope(Int index, Float value);
	};
};
