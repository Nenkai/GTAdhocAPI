using namespace System;

namespace pdistd
{
	/** \brief Represents a 3D listbox widget. */
	class MListBox3D : public MScrollRange
	{
		public:
			/** \brief constructor taking no param */
			MListBox3D() { };

			/** \brief Item index currently being focused. */
			Int focus_index;

			/** \brief Getter-only. */
			Int real_focus_index;

			Int visible_before;
			Int visible_after;

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

			Bool focus_scroll;

			/** \brief Whether to repeat at the start or end of the listbox. Defaults to false. */
			Bool repeat;

			/** \brief Defaults to false. */
			Bool ring;

			/** \brief Linear interpolation. Defaults to false. */
			Bool linear_interpolate;

			/** \brief Magnification type. Defaults to "square". 
			\details Available options:
			- "square"
			- "triangle"
			*/
			String magnify_type_name;

			String navigate_sound;

			MethodObject on_visible_notify;
			MethodObject on_focus_notify;

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
			void postRedraw();
	}
}