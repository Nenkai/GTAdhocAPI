using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents that displays cascading roots. */
	public class MCascadeRoot : public MWidget
	{
		public:
            /** @brief constructor taking no param */
            MCascadeRoot() { };

            void appendRootWindow(MRenderContext context, MRootWindow root);
            void removeRootWindow(MRenderContext context, MRootWindow root);
            void clearRootWindow(MRenderContext context);
	};
};
