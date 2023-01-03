using namespace System;
using namespace pdistd;

namespace gtengine
{
	class EntryGenerate
	{
		  public:
			Int entry_num;
			Int player_pos;
			GenerateType generate_type;
			Int enemy_list_type;
			ULong race_code;
			Int ai_skill;
			Int ai_skill_breaking;
			Int ai_skill_cornering;
			Int ai_skill_accelerating;
			Int ai_skill_starting;
			Int ai_roughness;
			Int enemy_lv;
			Int enemy_bspec_lv;
			Int gap_for_start_rolling_distance;
			Int rolling_start_v;
			Int use_rolling_start_param;
			Int bspec_lv_offset;
			std::vector<MCarThin> cars;
			std::vector<EntryBase> entry_base_array;
			std::vector<Int> delays;
			EnemySortType enemy_sort_type;
			Bool isDefault();
    }		
}