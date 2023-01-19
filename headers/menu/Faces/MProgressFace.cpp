using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays a progress bar. */
	public class MProgressFace : public MImageFace
	{
		public:

            /** @brief constructor taking no param */
            MProgressFace() { };

            MProgress progress;

            /** \brief Defaults to false. */
            Bool raw_mode;
            
            /** \brief Defaults to false. */
            Bool linear_mode;

            /** \brief Defaults to false. */
            Bool decreasable;

            /** \brief Stubbed. */
            Object final_width;
	};
};
