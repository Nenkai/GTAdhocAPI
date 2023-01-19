using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a sliding bar widget. */
	public class MSliderBar : public MSBox
	{
		public:
            /** @brief constructor taking no param */
            MSliderBar() { };

			/** \brief Getter-only. */
			Bool is_popuped;

			Int index;

			/** \brief Defaults to 0. */
			Int min;

			/** \brief Defaults to 1. */
			Int max;

			/** \brief Defaults to 0. */
			Int display_min;

			/** \brief Defaults to 1. */
			Int display_max;

			/** \brief Gets min/max as vector2. */
			Array<Int> range;

			/** \brief Defaults to 1. */
			Int step;

			void incIndex(Int count = 1);
			void decIndex(Int count = 1);
	};
};
