using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	public class MInstanceActor : public MActor
	{
		public:
            /** @brief constructor taking no param */
            MInstanceActor() { };

            String instance_path;
            MActor instance_actor;
	};
};
