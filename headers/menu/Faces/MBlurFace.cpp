using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that acts as blur. */
	public class MBlurFace : public MWidget
	{
		public:

            /** @brief constructor taking no param */
            MBlurFace() { };

            /** \brief Gets or sets the blur component. Defaults to 0.0. */
            Float blur;
	};
};
