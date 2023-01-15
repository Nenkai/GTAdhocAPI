using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays a pie. */
	public class MPieChart : public MWidget, MRichColor
	{
		public:

            /** @brief constructor taking no param */
            MPieChart() { };

            /** \brief Total value. Defaults to 100.0 (100%). */
			Float total_value;

			/** \brief Unit for the radius. Defaults to "ratio".
			\details Available options:
			- "ratio"
			- "pixel" */
			String radius_unit;

			/** \brief Defaults to 0.0. */
			Float inner_radius;

			/** \brief Defaults to 1.0.*/
			Float outer_radius;

			/** \brief Base color. Defaults to [0.5, 0.5, 0.5, 1.0]. */
			MColorObject base_color;

			/** \brief Display scale. Defaults to 1.0.*/
			Float display_scale;

			void clearSeries();
			void clearSeries(MRenderContext context);

			void insertSeries(MPieSeries series, MPieSeries series2);
			void insertSeries(MRenderContext context, MPieSeries series, MPieSeries series2);

			void appendSeries(MPieSeries series);
			void appendSeries(MRenderContext context, MPieSeries series);

			void removeSeries(MPieSeries series);
			void removeSeries(MRenderContext context, MPieSeries series);

			void replaceSeries(MPieSeries series, MPieSeries series2);
			void replaceSeries(MRenderContext context, MPieSeries series, MPieSeries series2);

			Int countSeries();
	};
};
