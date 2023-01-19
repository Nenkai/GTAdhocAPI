using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	public class MStrokePoint : public MEffect
	{
		public:
            
            /** \brief Defaults to 10. */
            Int buffer_frame;

            /** \brief Points as vector3. */
            Array<Float> point;

            /** \brief Defaults to 100.0. */
            Float point_x;

            /** \brief Defaults to 0.0. */
            Float point_y;

            /** \brief Defaults to 0.0. */
            Float point_z;

            /** \brief Defaults to true.*/
            Float head_visible;

            MColorObject head_color;

            /** \brief Defaults to 1.0. */
            Float head_color_r;

            /** \brief Defaults to 1.0. */
            Float head_color_g;

            /** \brief Defaults to 1.0. */
            Float head_color_b;

            /** \brief Defaults to 1.0. */
            Float head_color_a;
            
            /** \brief Defaults to 30.0. */
            Float head_width;

            /** \brief Defaults to true.*/
            Float tail_visible;

            MColorObject tail_color;

             /** \brief Defaults to 1.0. */
            Float tail_color_r;

             /** \brief Defaults to 1.0. */
            Float tail_color_g;

             /** \brief Defaults to 1.0. */
            Float tail_color_b;

             /** \brief Defaults to 1.0. */
            Float tail_color_a;

            /** \brief Defaults to 20.0. */
            Float tail_width0;

            /** \brief Defaults to 20.0. */
            Float tail_width1;

            /** \brief Defaults to 1.0. */
            Float tail_alpha0;

            /** \brief Defaults to 1.0. */
            Float tail_alpha1;

            String head_image_path;
            String tail_image_path;
	};
};
