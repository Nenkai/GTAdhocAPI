using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Live Timing car entry */
	class MLTEntry : public Object
	{
		  public:
		    MLTEntry() { };

			UInt car_code;
			ULong total_time;
			UShort total_laps;
			UShort pit_in_num;
			Short car_color;
			Short paint_color;
			Int starting_grid;
			UInt point;
			UInt total_point;
			Short apexspeed;
			Int best_lap_time;
			Int lap_time;
			Int entry_id;
			Int driver_index;
			String driver_name;
			String country_code;
			Int team_id;
			Int front_tire;
			Int rear_tire;
			UInt sector_time;
			Int road_distance;
			Bool is_chequered;
			Bool is_dnf;
			Bool is_disqualified;

    }		
}