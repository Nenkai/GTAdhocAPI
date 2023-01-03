using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class FailureCondition
	{
		  public:
			std::vector<FailureType> type_list;
			std::vector<Int> data_list;
			Int no_failure_at_result;
			Bool isDefault();

    }		
}