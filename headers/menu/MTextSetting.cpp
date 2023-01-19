using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays text. */
	public class MTextSetting
	{
		public:

            /** \brief Text color. Defaults to [0.83, 0.83, 0.83, 1.0]. */
            MColorObject color;

             /** \brief Top Text color. Defaults to [0.83, 0.83, 0.83, 1.0]. */
            MColorObject top_color;

             /** \brief Bottom Text color. Defaults to [0.83, 0.83, 0.83, 1.0]. */
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

            /** \brief Sets the text alignment. Defaults to 4 (Center). View details for options
            \details Each value is a different alignment:
            - 0: Top-Left
            - 1: Top-Center
            - 2: Top-Right
            - 3: Left
            - 4: Center
            - 5: Right
            - 6: Bottom-Left
            - 7: Bottom-Center
            - 8: Bottom-Right */
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

            /** \brief Shadow color. Defaults to [0.0, 0.0, 0.0, 1.0] */
            MColorObject shadow_color;

            /** \brief Shadow Alpha. Defaults to 1.0 (fully visible) */
            Float shadow_alpha;

            /** \brief Outline value. Defaults to 0.0 */
            Float outline_value;

             /** \brief Outline color. Defaults to [0.0, 0.0, 0.0, 1.0] */
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
