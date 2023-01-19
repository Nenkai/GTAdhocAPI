using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a widget that an image and text. */
	public class MImageText : public MWidget
	{
		public:

            /** @brief constructor taking no param */
            MImageText() { };

            /** \brief Text. */
            String text;

            /** \brief Space width. Defaults tp 54.0. */
            Float space_width;

            /** \brief X Alignment. Defaults to 0.5. */
            Float align_x;

            /** \brief Y Alignment. Defaults to 0.5. */
            Float align_y;

            /** \brief Color. Defaults to [1.0, 1.0, 1.0, 1.0]. */
            MColorObject color;

            /** \brief Image path, but also text file path (.txt)*/
            String image_path;
	};
};
