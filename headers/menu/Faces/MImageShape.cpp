using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a widget that an image shaped (or cropped from a texture atlas). */
	public class MImageShape : public MWidget
	{
		public:

            /** @brief constructor taking no param */
            MImageShape() { };

            /** \brief Sets the image linked to this image shape. */
            String image_path;

            /** \brief Primitive mode. Defaults to "polygon".
            \details Available options:
           - "points"
           - "lines"
           - "line_strip"
           - "line_loop"
           - "triangles"
           - "triangle_strip"
           - "triangle_fan"
           - "quads"
           - "quad_strip"
           - "polygon"
           - "sprite" */
            String prim_mode;

            Array<Array<Float>> vertex;

            /** \brief Tex coordinates. Should be 4 vector2's. */
            Array<Array<Float>> texcoord;

            Array color;

            /** \brief Stubbed. */
            Object outline;

            /** \brief Base color as RGBA. */
            Array<Float> base_color;

            /** \brief Whether the image shape has a shadow. Defaults to false. */
            Bool has_shadow;

            /** \brief Shadow color as RGBA. */
            Array<Float> shadow_color;

            /** \brief Updates vertex */
            void updateV(Array<Array<Float>> vertex);

            /** \brief Updates texcoord */
            void updateT(Array<Array<Float>> texcoord);

            /** \brief Updates color */
            void updateC(Array<Float> color);

            void circle(Float begin, Float end);

            /** \brief Circle fan [begin, end]*/
            Array<Float> circle_fan;

            Float circle_fan_begin;
            Float circle_fan_end;
	};
};
