using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays a chart. 
      This class is not usable - only bench functions in MOrganizer can bind to it internally. */
	public class MChartFace : public MWidget
	{
		public:

            /** @brief constructor taking no param */
            MChartFace() { };

            void reset();

            Int focus_mode;
            Bool logarithmX;
            Bool logarithmY;

            /** \brief Pitch (Vector2)*/
            Array<Float> pitch;

            /** \brief Mag (Vector2)*/
            Array<Float> mag;

            /** \brief Mag (Vector2)*/
            Array<Float> mag_max;

            /** \brief Look At (Vector2)*/
            Array<Float> lookat;
	};
};
