using namespace System;
using namespace pdistd;

namespace gtengine::GTGame

{
	class EntryBase
	{
		  public:
			MCarThin car;
			String driver_name;
			String driver_region;
			Int race_class_id;
			Int proxy_driver_model;
			std::vector<Int> boost_race_ratio;
			std::vector<Int> boost_ratio;
			Int ai_skill_breaking;
			Int ai_skill_cornering;
			Int ai_skill_accelerating;
			Int ai_skill_starting;
			Int ai_roughness;
			PARTS_NATUNE engine_na_tune_stage;
			PARTS_TURBINEKIT engine_turbo_kit;
			PARTS_COMPUTER engine_computer;
			PARTS_MUFFLER muffler;
			PARTS_SUSPENSION suspension;
			PARTS_GEAR transmission;
			Int wheel;
			Int wheel_color;
			Int wheel_inch_up;
			Int tire_f;
			Int tire_r;
			Int aero_wing;
			Int aero_1;
			Int aero_2;
			Int aero_3;
			Int power_limiter;
			Int downforce_f;
			Int downforce_r;
			Int gear_max_speed;
			Int paint_id;
			Int decken_number;
			Int body_code;
			Int head_code;
			Int body_color_code;
			Int head_color_code;
			Int ai_reaction;
			Int ballast_weight;
			Int ballast_position;
			Int decken_type;
			Int decken_custom_id;
			Int decken_custom_type;
			Bool isDefault();
    }		
}