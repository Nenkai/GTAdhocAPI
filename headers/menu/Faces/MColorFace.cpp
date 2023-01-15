using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays a color. */
	public class MColorFace : public MWidget, MRichColor
	{
		public:

            /** @brief constructor taking no param */
            MColorFace() { };

            Float alpha;
            Float getAlpha(Int color_index);
            void setAlpha(Int color_index, Float alpha);
            MColorObject getColor(Int color_index);
            void setColor(Int color_index, MColorObject color);

            /** \brief Gets the colors for this image face. 
            \details Each array is one color, RGBA from 0-255 */
            Array<Array<Int>> face_color;

            /** \brief Start position of the color gradation [X, Y] */
            Array<Float> gradation_start;

            /** \brief End position of the color gradation [X, Y] */
            Array<Float> gradution_end;

            /** \brief Whether to enable an outline for this color face. */
            Bool outline_enable;

            /** \brief Whether to ONLY render the outline. */
            Bool outline_only;

            /** \brief Width of the outline in pixels. Use negative numbers to expand inwards. */
            Float outline_width;

            /** \brief Color of the outline. */
            MColorObject outline_color;

            /** \brief Red component of the outline. */
            Float outline_color_r;

            /** \brief Green component of the outline. */
            Float outline_color_g;
            
            /** \brief Blue component of the outline. */
            Float outline_color_b;

            /** \brief Alpha of the outline. */
            Float outline_color_a;

            /** \brief Rounding radius/width in pixels for the color face. */
            Float round_radius;

            /** \brief Surface roughness (unknown). Defaults to 0.0. */
            Float surface_roughness;

            /** \brief Whether to emit light from the edges of the color face. */
            Bool emission_enable;

            /** \brief Glowing width in pixels. Requires emission_enable to be enabled. */
            Float glow_width;

            /** \brief Same as glow_width. */
            Float emission_width;

            /** \brief Color of the outline. Requires emission_enable to be enabled. */
            MColorObject emission_color;

            /** \brief Red component of the outline. */
            Float emission_color_r;

            /** \brief Green component of the outline. */
            Float emission_color_g;
            
            /** \brief Blue component of the outline. */
            Float emission_color_b;

            /** \brief Alpha of the outline. */
            Float emission_color_a;

            /** \brief Gain/brightness of the emission. Defaults to 1.0. */
            Float emission_gain;

            /** \brief Whether to enable a shadow cast. */
            Bool shadow_enable;

            /** \brief Delta/Direction of the shadow [X,Y]. Requires shadow_enable to be enabled.
            \details 5,5 would cast the shadow to bottom-right */
            Array<Float> shadow_delta;

            /** \brief Shadow Delta X. Requires shadow_enable to be enabled. */
            Float shadow_dx;
            
            /** \brief Shadow Delta Y. Requires shadow_enable to be enabled.*/
            Float shadow_dy;

            /** \brief Width of the penumbra in pixels. Requires shadow_enable to be enabled. */
            Float penumbra_width;

            /** \brief Color of the umbra. Requires shadow_enable to be enabled. */
            MColorObject umbra_color;

            /** \brief Red component of the umbra. */
            Float umbra_color_r;

            /** \brief Green component of the outline. */
            Float umbra_color_g;
            
            /** \brief Blue component of the outline. */
            Float umbra_color_b;

            /** \brief Alpha of the outline. */
            Float umbra_color_a;

            /** \brief Color of the umbra. Requires shadow_enable to be enabled. */
            MColorObject penumbra_color;

            /** \brief Red component of the umbra. */
            Float penumbra_color_r;

            /** \brief Green component of the penumbra. */
            Float penumbra_color_g;
            
            /** \brief Blue component of the penumbra. */
            Float penumbra_color_b;

            /** \brief Alpha of the penumbra. */
            Float penumbra_color_a;

            /** \brief Alpha of the emission. Defaults to 1.0 (fully visible)*/
            Float emission_alpha;
	};
};
