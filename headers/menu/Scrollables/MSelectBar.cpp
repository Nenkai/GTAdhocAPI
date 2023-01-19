using namespace System;

namespace pdistd
{
	/** \brief Select bar. */
	class MSelectBar : public MScrollRange
	{
		public:
			/** \brief constructor taking no param */
			MSelectBar() { };

			Int index;
			
			/** \brief This one may be bugged, index is read as argument 0 instead of 1 */
			void moveIndex(MRenderContext context, Int index);
			void incIndex(Int count = 1);
			void decIndex(Int count = 1);
			Int incLimit();
			Int decLimit();
			MWidget getFocusedWidget();
			void sort(FunctionObject sort_cb);
			void makeDisableList(FunctionObject cb);
	}
}