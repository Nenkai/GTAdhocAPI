using namespace System;

namespace menu
{
	/** \brief Scroll clip. */
	class MScrollClip: public MScroller
	{
		public:
			/** \brief constructor taking no param */
			MScrollClip() { };

			void updateGeometry();
			void warp();

			/** \brief Scroll mode name. Defaults to "follow_focus".
			\details Available options:
			- "follow_focus"
			- "floating"
			- "manual"
			- "follow_path"
			*/
			String scroll_mode_name;

			/** \brief Defaults to 0.3. */
			Float interpolate_ratio;

			/** \brief Defaults to 10.0. */
			Float interpolate_unit;

			/** \brief Defaults to false. */
			Bool edge_scroll_x;

			/** \brief Defaults to false. */
			Bool edge_scroll_y;

			/** \brief Defaults to 1.0. */
			Float follow_path_position;

			void manualTargetIncX(Float value);
			void manualTargetIncY(Float value);

			/** \brief Gets the target's position as a vector2. */
			Array<Float> getTargetPosition(MWidget widget);

			void setFollowPath(Array<Float> path, Bool unk = false);

			void syncFollowPath();

			MethodObject on_follow_path_end;

			/** \brief Defaults to 0.0. */
			Float manual_target_x;

			/** \brief Defaults to 0.0. */
			Float manual_target_y;

			/** \brief Defaults to 0.0. */
			Float manual_target_w;

			/** \brief Defaults to 0.0. */
			Float manual_target_h;

			/** \brief Defaults to 0. */
			Int scroll_mode;
	}
}