using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class StageData
	{
		  public:
			std::vector<StageResetData> at_quick;
			std::vector<StageResetData> before_start;
			std::vector<StageResetData> countdown;
			std::vector<StageResetData> race_end;
			StageLayoutType layout_type_at_quick;
			StageLayoutType layout_type_before_start;
			StageLayoutType layout_type_countdown;
			StageLayoutType layout_type_race_end;

    }		
}