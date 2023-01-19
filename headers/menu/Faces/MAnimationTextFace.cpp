using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays animated text. */
	public class MAnimationTextFace : public MTextFace
	{
		public:

            /** @brief constructor taking no param */
            MAnimationTextFace() { };

            void setAnimationParam(Int unk, Float unk2, Int unk3, Float unk4, Float unk5);

            /** \brief Defaults to false. */
            Bool initial_animation;

            /** \brief Defaults to false. */
            Bool animation;

            /** \brief Animation mode. Defaults to "none".
            \details Available options:
            - "none"
            - "fall"
            - "slide"
            - "wave"
            - "spin"
            - "face"
            - "scale" */
            String animation_mode;

            /** \brief Animation time. Defaults to 0.0. */
            Float animation_time;

            /** \brief Animation loop count. Defaults to 0. */
            Int animation_loop_count;

            /** \brief Animation start delay. Defaults to 0.0. */
            Float animation_start_delay;

            void updateAnimationParam();
	};
};
