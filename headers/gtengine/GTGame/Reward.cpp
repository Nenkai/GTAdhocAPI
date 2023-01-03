using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class Reward
	{
		  public:
			std::vector<Int> prize_table;
			std::vector<Int> point_table;
			std::vector<Int> star_table;
			std::vector<GameItem> present;
			Int special_reward_code;
			Int prize_type;
			Int pp_base;
			Int percent_at_pp100;
			Int is_once;
			RewardPresentType present_type;
			std::vector<GameItem> entry_present;
			RewardEntryPresentType entry_present_type;
			EntryBase entry_base;
			Bool isDefault();

    }		
}