using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays a radar chart. */
	public class MRaderChart : public MWidget
	{
		public:

            /** @brief constructor taking no param */
            MRaderChart() { };

            /** \brief Total value. Defaults to 100.0 (100%). */
			Float total_value;

			/** \brief Unit for the radius. Defaults to "ratio".
			\details Available options:
			- "ratio"
			- "pixel" */
			String radius_unit;

			/** \brief Defaults to 1.0. */
			Float radius;

			/** \brief Defaults to 0.0. */
			Float line_width;
			
			/** \brief Line color. Defaults to [0.0, 1.0, 1.0, 1.0]. */
			MColorObject line_color;

			/** \brief Fill color. Defaults to [0.0, 1.0, 1.0, 0.2]. */
			MColorObject fill_color;

			/** \brief Display scale. Defaults to 1.0.*/
			Float display_scale;

			void clearSeries();
			void clearSeries(MRenderContext context);

			void insertSeries(MRaderChart series, MRaderChart series2);
			void insertSeries(MRenderContext context, MRaderChart series, MRaderChart series2);

			void appendSeries(MRaderChart series);
			void appendSeries(MRenderContext context, MRaderChart series);

			void removeSeries(MRaderChart series);
			void removeSeries(MRenderContext context, MRaderChart series);

			void replaceSeries(MRaderChart series, MRaderChart series2);
			void replaceSeries(MRenderContext context, MRaderChart series, MRaderChart series2);

			Int countSeries();
	};
};
