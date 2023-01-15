using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays text. */
	public class MTextFace : public MWidget, MTextSetting
	{
		public:

            /** @brief constructor taking no param */
            MTextFace() { };

            String key;
            String text;
            String localized_text_page;

            /** \brief Max text width. Defaults to 0.0 */
            Float max_text_width;

            /** \brief Whether to adjust the scale. Defaults to false. */
            Bool adjust_scale;

            /** \brief Whether to cache the image. Defaults to false. */
            Bool imaging_cache;

            /** \brief Text color. */
            MColorObject text_color;

            /** \brief Getter-only. */
            String value;

            /** \brief Returns the text size as [w, h]. */
            Array<Float> getTextSize();

            /** \brief Reserves the specified capacity for the string buffer. */
            void reserveCapacity(Int str_capacity);

            Float shadow_distance;

            void Transient();
            void TransientReset();
            void Reflect();
	};
};
