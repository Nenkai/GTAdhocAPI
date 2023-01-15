using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a radar series for use with MRaderChart. */
	public class MRaderSeries : public MChartSeries
	{
		public:

            /** @brief constructor taking no param */
            MRaderSeries() { };

			/** \brief Share in %. Defaults to 0. */
            Float value;

			/** \brief Display scale. Defaults to 0.0. */
			Float display_scale;

			/** \brief Getter-only. */
			MRaderSeries next_series;

			/** \brief Getter-only. */
			MRaderSeries prev_series;
	};
};
