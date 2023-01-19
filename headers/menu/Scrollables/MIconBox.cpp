using namespace System;

namespace pdistd
{
	/** \brief Represents an icon box widget (2D scrollable). */
	class MIconBox : public MScrollArea
	{
		public:
			/** \brief constructor taking no param */
			MIconBox() { };

			/** \brief Item index currently being focused. */
			Int focus_index;

			Int drag_index;

			/** \brief Defaults to 1. */
			Int step_min;

			/** \brief Defaults to 1. */
			Int step_max;

			/** \brief Interpolate Ratio. Defaults to 0.2. */
			Float interpolate_ratio;

			/** \brief Horizontal magnification. Defaults to 1.0. */
			Float h_magnify;

			/** \brief Vertical magnification. Defaults to 1.0. */
			Float v_magnify;

			/** \brief Defaults to 0.5. */
			Float x_scroll_point;

			/** \brief Defaults to 0.5. */
			Float y_scroll_point;

			/** \brief Defaults to 0.5. */
			Float x_alignment;

			/** \brief Defaults to 0.5. */
			Float y_alignment;

			/** \brief Whether focusing is active. Defaults to true. */
			Bool focus_active;

			/** \brief Whether to repeat at the start or end of the listbox. Defaults to false. */
			Bool repeat;

			/** \brief Defaults to false. */
			Bool keep_scroll_point;

			/** \brief Whether to adjust scale. Defaults to false. */
			Bool adjust_scale;

			/** \brief Linear interpolation. Defaults to false. */
			Bool linear_interpolate;

			/** \brief Layout name. Defaults to "TB_LR".
			\details Available options:
			- "TB_LR" - Top-Bottom, Left-Right
			- "TB_RL" - Top-Bottom, Right-Left
			- "BT_LR" - Bottom-Top, Left-Right
			- "BT_RL" - Bottom-Top, Right-Left
			- "LR_TB" - Left-Right, Top-Bottom
			- "LR_BT" - Left-Right, Bottom-Top
			- "RL_TB" - Right-Left, Top-Bottom
			- "RL_BT" - Right-Left, Bottom-Top */
			String layout_name;

			MethodObject update_notify;
			MethodObject visible_notify;
			MethodObject focus_notify;

			Int moveLeft(Int count = 1);
			Int moveRight(Int count = 1);
			Int moveUp(Int count = 1);
			Int moveDown(Int count = 1);

			void setPageItemCount(Int x, Int y);

  			void setItemTemplate(MRenderContext context, MWidget item);
  			Int getItemCount();
  			void setItemCount(Int count);
  			MWidget getItemWidget(Int index, MRenderContext = nil);
  			void setItemWidget(Int index, MRenderContext context, MWidget widget);
  			Bool getItemVisible(Int index);
  			void setItemVisible(Int index, Bool visible);
  			Bool getItemVisibleValue(Int index);
  			void setItemVisibleValue(Int index, Bool value);
  			Bool getItemVisibleEvent(Int index);
  			void setItemVisibleEvent(Int index, Bool value);
  			Int getItemUpdate(Int index);
  			void setItemUpdate(Int index, Int value);
  			Bool getItemActive(Int index);
  			void setItemActive(Int index, Bool active);
  			Bool getItemInsensitive(Int index);
  			void setItemInsensitive(Int index, Bool insensitive);
  			void enterDragMode(MRenderContext context, MWidget widget);
  			void leaveDragMode(MRenderContext context);

			void postRedraw();

			/** \brief Callback for when an item is updated. */
			MethodObject update_callback;

			/** \brief Callback for when an item is visible. */
			MethodObject visible_callback;

			/** \brief Callback for when an item is focused. */
			MethodObject focus_callback;
	}
}