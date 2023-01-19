using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that allows number input. */
	public class MInputNumberFace : public MWidget, MTextSetting
	{
		public:

            /** @brief constructor taking no param */
            MInputNumberFace() { };

            /** \brief Minimum number. Defaults to 0. */
            Int min;

            /** \brief Maximum number. Defaults to 256. */
            Int max;

            /** \brief Value. Defaults to 0. */
            Int value;

            /** \brief Defaults to 0. */
            Int active;

            /** \brief Defaults to 1. */
            Int repeat;
	};
};
