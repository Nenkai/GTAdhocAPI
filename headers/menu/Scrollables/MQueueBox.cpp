using namespace System;

namespace pdistd
{
	/** \brief Represents a queuebox widget. */
	class MListBox : public MScrollRange
	{
		public:
			/** \brief constructor taking no param */
			MListBox() { };

			Int max_item_count;

			/** \brief Item index currently being focused. */
			Int focus_index;

			Int first_index;
			Int last_index;


			/** \brief Defaults to 1. */
			Int step_min;

			/** \brief Defaults to 1. */
			Int step_max;

			/** \brief Interpolate Ratio. Defaults to 0.2. */
			Float interpolate_ratio;

			/** \brief Whether focusing is active. Defaults to true. */
			Bool focus_active;

			/** \brief Whether to repeat at the start or end. Defaults to false. */
			Bool repeat;

			/** \brief Linear interpolation. Defaults to false. */
			Bool linear_interpolate;

			/** \brief Defaults to true.*/
			Bool auto_focus_last;

			/** \brief Defaults to false. */
			Bool keep_scroll_point;

			/** \brief Defaults to 0.5. */
			Float scroll_point;

			/** \brief Defaults to 0.0. */
			Float x_alignment;

			/** \brief Defaults to 0.0. */
			Float y_alignment;

			MethodObject visible_notify;
			MethodObject focus_notify;

			/** \brief Increments the listbox item index. */
			void incIndex(Int count = 1);

			/** \brief Decrements the listbox item index. */
  			void decIndex(Int count = 1);

  			MWidget getItemWidget(Int index, MRenderContext = nil);
  			void setItemWidget(Int index, MRenderContext context, MWidget widget);
			void setItemWidgets(MRenderContext context, Array<MWidget> widgets);
  			void appendItemWidget(MRenderContext context, MWidget widget);
			void appendItemWidgets(MRenderContext context, Array<MWidget> widgets);
  			void removeItemWidget(MRenderContext context, MWidget widget);
			void removeItemWidgets(MRenderContext context, Array<MWidget> widgets);
			void clearItemWidget();
			Bool getItemVisible(Int index);
  			void setItemVisible(Int index, Bool visible);
  			Bool getItemActive(Int index);
  			void setItemActive(Int index, Bool active);
  			Bool getItemInsensitive(Int index);
  			void setItemInsensitive(Int index, Bool insensitive);
			void postRedraw();

			/** \brief Callback for when an item is visible. */
			MethodObject visible_callback;

			/** \brief Callback for when an item is focused. */
			MethodObject focus_callback;
	}
}