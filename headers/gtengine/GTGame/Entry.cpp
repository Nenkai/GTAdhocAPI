using namespace System;
using namespace pdistd;

namespace gtengine::GTGame

{
	class Entry
	{
		  public:
			Int player_no;
			MCarThin car;
			MCarParameter car_parameter;
			String driver_name;
			String driver_region;
			MCarDriverParameter driver_parameter;
			std::vector<MCarDriverParameter> driver_parameter_list;
			EntryBase entry_base;
			Int available_initial_position;
			Int race_class_id;
			Int proxy_driver_model;
			Int pilot_id;
			Int initial_position;
			Int initial_velocity;
			StartType start_type;
			Int delay;
			Int no_suitable_tire;
			Int initial_fuel100;
			std::vector<Int> boost_race_ratio;
			std::vector<Int> boost_ratio;
			Int ai_skill_breaking;
			Int ai_skill_cornering;
			Int ai_skill_accelerating;
			Int ai_skill_starting;
			Int ai_roughness; 
			Bool isDefault();
    }		
}