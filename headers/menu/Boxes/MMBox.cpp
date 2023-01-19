using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Box that allows splitting widgets into a specific layout (rows/columns). */
	public class MMBox : public MBox
	{
		public:

			/** @brief constructor taking no param */
            MMBox() { };

			/** \brief Layout name.
			\details Can be: 
			- LR_TB (Left-Right, Top-Bottom)
			- TB_LR (Top-Bottom, Left-Right) 
			
			Defaults to LR_TB. */
			String layout_name;

			/** \brief Layout count. Defaults to 2. */
			Int layout_count;

			/** \brief Horizontal spacing. Defaults to 0.0.*/
			Float h_spacing;

			/** \brief Vertical spacing. Defaults to 0.0.*/
			Float v_spacing;

			/** \brief Columns. Defaults to 2. */
			Int column;
	};
};
