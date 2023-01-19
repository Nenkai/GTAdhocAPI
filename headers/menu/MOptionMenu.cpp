using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	public class MOptionMenu : public MSBox
	{
		public:
                  /** @brief constructor taking no param */
                  MOptionMenu() { };

                  /** \brief Getter-only. */
                  Int index;

                  Int copy_selected_item;

                  /** \brief Getter-only. Defaults to false. */
                  Int is_popuped;

                  void setIndex(MRenderContext context, Int index);
                  MWidget getItem();
                  Int Count();
                  void applyAppend(MRenderContext context);
                  void setInsensitive(MRenderContext context, Array<Int> insensitive_arr);
                  void incIndex(Object unk);
                  void openPopup(MRenderContext context);
                  
                  MethodObject on_popup_open;
                  MethodObject on_popup_closed;
                  MethodObject on_value_changed;

	};
};
