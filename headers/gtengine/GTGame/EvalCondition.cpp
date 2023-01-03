using namespace System;
using namespace pdistd;

namespace gtengine::GTGame

{
	class EvalCondition
	{
		  public:
			EvalType type;
			Int gold;
			Int silver;
			Int bronze;
			String ghost_data_path;
			Bool isDefault();

    }		
}