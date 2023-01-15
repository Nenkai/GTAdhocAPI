using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a pie series for use with MPieChart. */
	public class MPieSeries : public MChartSeries
	{
		public:

            /** @brief constructor taking no param */
            MPieSeries() { };

			/** \brief Share in %. Defaults to 0. */
            Float value;

			/** \brief Color to fill with. Defaults to [1.0, 1.0, 1.0, 1.0] */
			MColorObject fill_color;

			/** \brief Display scale. Defaults to 0.0. */
			Float display_scale;

			/** \brief Getter-only. */
			MPieSeries next_series;

			/** \brief Getter-only. */
			MPieSeries prev_series;
	};
};
