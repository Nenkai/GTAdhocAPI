using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a rectangle - [x, y, w, h].*/
	public class MColorObject : public Object
	{
		public:
            MColorObject() { };

            /** \brief Creates a color object from hex color string i.e "FF000000" for red 
            \details Order is RRGGBBAA */
            MColorObject(String hex);
            MColorObject(Float r = 1.0, Float g = 1.0, Float b = 1.0, Float a = 1.0);

            /** \brief Gets the red component (0.0 to 1.0). */
            Float r;

            /** \brief Gets the green component (0.0 to 1.0). */
            Float g;

            /** \brief Gets the blue component (0.0 to 1.0). */
            Float b;

            /** \brief Gets the hue component (0.0 to 1.0). */
            Float h;

            /** \brief Gets the saturation component (0.0 to 1.0). */
            Float s;

            /** \brief Gets the value component (0.0 to 1.0). */
            Float v;

            /** Gets the color index or sets the color from index.
            \details Depends on colors being set from menu::BasicColorMap/menu::ColorPalette, normally defined in "products/gt6/script/MenuClassDefine.ad" */
            Int color_index;

            /** Gets the color name or sets the color from name.
            \details Depends on colors being set from menu::BasicColorMap/menu::ColorPalette, normally defined in "products/gt6/script/MenuClassDefine.ad" */
            String color_name;

            /** \brief Getter-only. */
            Float normalize;

	};
};
