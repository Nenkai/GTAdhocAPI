using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays text. */
	public class MTextFace : public MWidget
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

            MColorObject color;
            MColorObject top_color;
            MColorObject bottom_color;

            /** \brief Alpha. Defaults to 1.0 (fully visible)*/
            Float alpha;

            /** \brief Top Alpha. Defaults to 1.0 (fully visible) */
            Float top_alpha;

            /** \brief Bottom Alpha. Defaults to 1.0 (fully visible) */
            Float bottom_alpha;

            /** \brief Font. Defaults to "IwataSet_1" */
            String font;

            /** \brief Defaults to true */
            Bool proportional;

            /** \brief Defaults to true */
            Bool alpha_proportional;

            /** \brief Defaults to true */
            Bool num_proportional;

            /** \brief Whether multi-line is allowed. Defaults to false */
            Bool multiline;

            /** \brief Whether line breaks are automatically done. Defaults to false */
            Bool auto_line_break;

            /** \brief Defaults to false */
            Bool equalized;

            /** \brief Defaults to false */
            Bool abbreviate;

            /** \brief Defaults to true */
            Bool aligned;

            /** \brief Gets or sets the alignment. */
            Int align;

            Int clut;

            /** \brief Original Scale X. Defaults to 1.0 */
            Float original_scale_x;

            /** \brief Original Scale Y. Defaults to 1.0 */
            Float original_scale_y;

            /** \brief Same as scale_x */
            Float current_scale_x;

            /** \brief Same as scale_y */
            Float current_scale_y;

            /** \brief Scale X. Defaults to 1.0 */
            Float scale_x;

            /** \brief Scale X. Defaults to 1.0 */
            Float scale_y;

            /** \brief Shadow value. Defaults to 0.0. */
            Float shadow_value;

            /** \brief Shadow color. */
            MColorObject shadow_color;

            /** \brief Shadow Alpha. Defaults to 1.0 (fully visible) */
            Float shadow_alpha;

            /** \brief Outline value. Defaults to 0.0 */
            Float outline_value;

             /** \brief Outline color. */
            MColorObject outline_color;

            /** \brief Offset to the next line. Defaults to 0.0 */
            Float nextline_offset;

            /** \brief Unknown. Defaults to 0.0 */
            Float type_spacing;

            /** \brief Line height. Defaults to 21.0 */
            Float line_height;

            /** \brief Whether to enable color parsing within the text. Defaults to true.
            Depends on values in a string which can be seen here
            https://github.com/Nenkai/GTAdhocToolchain/blob/master/GTAdhocToolchain.Compiler/AdhocDefineConstants.cs */
            Bool parse_enable;

            /** \brief Whether to enable word wrapping. Defaults to true. */
            Bool wordwrap;

            void resetScale();
            Float getShadowValueX(Int unk);
            Float setShadowValueX(Int unk, Float value);
            Float getShadowValueY(Int unk);
            Float setShadowValueY(Int unk, Float value);
            MColorObject getShadowColor(Int unk);
            Float setShadowColor(Int unk, MColorObject color);
            Float getShadowAlpha(Int unk);
            Float setShadowAlpha(Float value);

            void setTextColor(Int color_index, Object unk, ...);
	};
};
