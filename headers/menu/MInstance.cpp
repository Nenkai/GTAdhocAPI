using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	public class MInstance : public MComposite
	{
		public:
            /** @brief constructor taking no param */
            MInstance() { };

            String instance_path;
            MWidget instance_widget;
	};
};
