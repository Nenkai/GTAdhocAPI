using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a scaling bar widget. */
	public class MScaleBar : public MSBox
	{
		public:
            /** @brief constructor taking no param */
            MScaleBar() { };

			/** \brief Defaults to 1. */
            Int adjust_popup_size;

			Float value;
			Float current_value;
			Int index;

			/** \brief Defaults to 0.0. */
			Float repeat_start;

			/** \brief Defaults to 0.0. */
			Float min;

			/** \brief Defaults to 100.0. */
			Float max;

			/** \brief Defaults to 0.0. */
			Float display_min;

			/** \brief Defaults to 100.0. */
			Float display_max;

			/** \brief Gets or sets range [min, max]. */
			Array<Float> range;

			/** \brief Defaults to 1.0. */
			Float step;

			/** \brief Defaults to 0.0. */
			Float step_factor;

			/** \brief Defaults to 0. */
			Int popup;

			/** \brief Getter-only. */
			Int cancel;

			/** \brief Defaults to true. */
			Bool horizontal;

			void incValue();
			void incValue(Float unk);
			void decValue();
			void decValue(Float unk);
			void openPopup(MRenderContext context);
	};
};
