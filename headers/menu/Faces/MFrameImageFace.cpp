using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays a framed image. */
	public class MFrameImageFace : public MColorFace
	{
		public:

            /** @brief constructor taking no param */
            MFrameImageFace() { };

            /** \brief Gets the center image path. */
            String getCImagePath();

            /** \brief Gets the top image path. */
            String getTImagePath();

            /** \brief Gets the bottom image path.*/
            String getBImagePath();
            
            /** \brief Gets the left image path.*/
            String getLImagePath();

            /** \brief Gets the right image path.*/
            String getRImagePath();

            /** \brief Gets the top-left image path.*/
            String getTLImagePath();

            /** \brief Gets the top-right image path.*/
            String getTRImagePath();

            /** \brief Gets the bottom-right image path.*/
            String getBLImagePath();

            /** \brief Gets the bottom-right image path.*/
            String getBRImagePath();

            /** \brief Gets the image path.*/
            String getImagePath();
	};
};
