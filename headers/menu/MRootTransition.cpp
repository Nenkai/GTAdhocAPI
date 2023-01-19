using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a root transition. */
	public class MRootTransition : public Object
	{
		public:

            MRootTransition(MWidget widget) { };

            void pageOut(MRenderContext context);
            void pageIn(MRenderContext context);
            void syncOut(MRenderContext context);
            void syncIn(MRenderContext context);

            /** \brief Stubbed. */
            void start();

            /** \brief Getter-only. */
            Int state;

            Object page_out;
            Object page_in;

            MethodObject on_page_out_start;
            MethodObject on_page_out_end;
            MethodObject on_page_in_start;
            MethodObject on_page_in_end;

            /** \brief Getter-only. */
            MWidget root_widget;
            
            /** \brief Getter-only. */
            MRootWindow root_window;
	};
};
