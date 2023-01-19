using namespace System;

namespace pdistd
{
	/** \brief Represents a listbox widget. */
	class MListBox : public MScrollRange
	{
		public:
			/** \brief constructor taking no param */
			MListBox() { };

			/** \brief Item index currently being focused. */
			Int focus_index;

			/** \brief Getter-only. */
			Int real_focus_index;

			Int save_index;
			Int drag_index;

			/** \brief Defaults to 1. */
			Int step_min;

			/** \brief Defaults to 1. */
			Int step_max;

			/** \brief Interpolate Ratio. Defaults to 0.2. */
			Float interpolate_ratio;

			/** \brief Horizontal magnification on focus. Defaults to 1.0. */
			Float h_focus_magnify;

			/** \brief Vertical magnification on focus. Defaults to 1.0. */
			Float v_focus_magnify;

			/** \brief Horizontal item magnification. Defaults to 1.0. */
			Float h_item_magnify;

			/** \brief Vertical item magnification. Defaults to 1.0. */
			Float v_item_magnify;

			/** \brief Whether focusing is active. Defaults to true. */
			Bool focus_active;

			/** \brief Whether to repeat at the start or end of the listbox. Defaults to false. */
			Bool repeat;

			/** \brief Defaults to false. */
			Bool ring;

			/** \brief Whether to adjust scale. Defaults to false. */
			Bool adjust_scale;

			/** \brief Linear interpolation. Defaults to false. */
			Bool linear_interpolate;

			/** \brief Magnification type. Defaults to "square". 
			\details Available options:
			- "square"
			- "triangle"
			*/
			String magnify_type_name;

			/** \brief Defaults to false. */
			Bool pseudo_magnify;

			/** \brief Whether to stop firing key events. Defaults to false. */
			Bool stop_key_event;

			/** \brief Defaults to false. */
			Bool elastic_mode;

			/** \brief Defaults to false. */
			Bool keep_scroll_point;

			/** \brief Defaults to 0.5. */
			Float scroll_point;

			/** \brief Defaults to 0.0. */
			Float x_alignment;

			/** \brief Defaults to 0.0. */
			Float y_alignment;

			/** \brief Sound name to play when navigating. Defaults to "".*/
			String navigate_sound;

			MethodObject update_notify;
			MethodObject visible_notify;
			MethodObject focus_notify;

			/** \brief Increments the listbox item index. */
			void incIndex(Int count = 1);

			/** \brief Decrements the listbox item index. */
  			void decIndex(Int count = 1);

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

			/** \brief Horizontal magnification. Defaults to 1.0. */
			Float h_magnify;

			/** \brief Vertical magnification. Defaults to 1.0. */
			Float v_magnify;

			/** \brief Magnification ratio. Defaults to 1.0. */
			Float magnify_ratio;

			/** \brief Horizontal justification. Defaults to 0.0. */
			Float h_justify;

			/** \brief Vertical justification. Defaults to 0.0. */
			Float v_justify;

			/** \brief Same as h_justify */
			Float list_justify;

			/** \brief Same as v_justify */
			Float item_justify;

			/** \brief Same as v_justify */
			Float justify;

			/** \brief Same as keep_scroll_point */
			Bool keep_alignment;

			/** \brief Same as scroll_point */
			Bool alignment;

			/** \brief Callback for when an item is visible. */
			MethodObject visible_callback;

			/** \brief Callback for when an item is focused. */
			MethodObject focus_callback;
	}
}