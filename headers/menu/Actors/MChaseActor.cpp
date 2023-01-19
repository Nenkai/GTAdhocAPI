using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a chasing actor. */
	public class MChaseActor : public MActor
	{
		public:
            
			/** @brief constructor taking no param */
            MChaseActor() { };

			void setTarget(MWidget target_widget, Float unk = 0.0, Float unk2 = 1.0);

			void reset();
			void freeze();

			void setChaseUpdate(Bool unk, Bool unk2, Bool unk3, Bool unk4);
			void setChaseOffset(Float unk, Float unk2, Float unk3, Float unk4);

			/** \brief Defaults to true.*/
			Bool update_x;

			/** \brief Defaults to true.*/
			Bool update_y;

			/** \brief Defaults to false.*/
			Bool update_w;

			/** \brief Defaults to false.*/
			Bool update_h;

			/** \brief Defaults to 0.0.*/
			Float target_x;

			/** \brief Defaults to 0.0.*/
			Float target_y;

			/** \brief Defaults to 0.0.*/
			Float target_w;

			/** \brief Defaults to 0.0.*/
			Float target_h;

			/** \brief Defaults to 0.0.*/
			Float offset_x;

			/** \brief Defaults to 0.0.*/
			Float offset_y;

			/** \brief Defaults to 0.0.*/
			Float offset_w;

			/** \brief Defaults to 0.0.*/
			Float offset_h;

			/** \brief Defaults to 0.0.*/
			Float velocity_x;

			/** \brief Defaults to 0.0.*/
			Float velocity_y;

			/** \brief Defaults to 0.0.*/
			Float velocity_w;

			/** \brief Defaults to 0.0.*/
			Float velocity_h;

			/** \brief Defaults to false. */
			Bool is_interpolate_mode;

			/** \brief Defaults to false. */
			Bool is_for_size;

			/** \brief Defaults to false. */
			Bool is_minus_reset;

			/** \brief Defaults to false. */
			Bool is_screen_geometry;

			/** \brief Defaults to 40.0. */
			Float spring_ratio;

			/** \brief Defaults to 20.0. */
			Float friction_ratio;

			/** \brief Defaults to 0.2. */
			Float interpolate_ratio;
	};
};
