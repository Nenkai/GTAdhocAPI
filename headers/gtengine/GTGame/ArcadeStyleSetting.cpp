using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class ArcadeStyleSetting
	{
		  public:
			Int start_seconds;
			Int default_extend_seconds;
			Int limit_seconds;
			Int level_up_step;
			Int overtake_seconds;
			Int enable_speed_trap;
			Int enable_jump_bonus;
			Int appear_step_v;
			Int disappear_step_v;
			Int afford_time;
			Int overtake_score;
			Int speed_trap_score;
			Int jump_bonus_score;
			Int section_extend_seconds;
			Int speed_trap;
			Int startup_step_v;
			Int startup_offset_v;
			Int initial_velocity_l;
			Int initial_velocity_h;
			Bool isDefault();
    }		
}
