using namespace System;

namespace pdistd
{
	/** \brief Select box. */
	class MSelectBox : public MScrollRange
	{
		public:
			/** \brief constructor taking no param */
			MSelectBox() { };

			Int index;

			/** \brief Defaults to 16.0. */
			Int unit_width;

			/** \brief Defaults to 16.0. */
			Int unit_height;



			void moveIndex(MRenderContext context, Int index);
			void incIndex(Int count = 1);
			void decIndex(Int count = 1);
			Int incLimit();
			Int decLimit();
			MWidget getFocusedWidget();
			void sort(FunctionObject sort_cb);
			void insertSortList(MRenderContext context, MWidget widget, FunctionObject unk, FunctionObject unk2);
			void makeDisableList(FunctionObject cb);
			void callFocus(MRootWindow window);
			void outFocus(MRootWindow window);
			Int Count();
			MWidget getItem(Int index);
	}
}