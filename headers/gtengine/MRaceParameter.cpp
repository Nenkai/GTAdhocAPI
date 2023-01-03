using namespace System;
using namespace pdistd;
using namespace gtengine::GTGame;

namespace gtengine
{
	/** \brief Represents race parameters. */
	class MRaceParameter
	{
		  public:
			MRaceParameter();

			void deepCopy();
			RaceType race_type;
			SessionType session_type;
			StartType start_type;
			CompleteType complete_type;
			FinishType finish_type;
			Int race_initial_laps;
			Int keep_load_ghost;
			Int race_limit_laps;
			Int race_limit_minute;
			Int time_to_start;
			Int time_to_finish;
			Int over_entry_max;
			Int entry_max;
			Int large_entry_max;
			Int racers_max;
			Int class_id;
			ULong course_code;

			/** \details WILL call SpecDB on fetching */
			ULong scenery_code;
			Int course_layout_no;
			MTime datetime;
			Int time_progress_speed;
			Int lucky_slot_id;
			Int auto_start_with_session;
			Int auto_end_session_with_finish;
			Int immediate_finish;
			GridSortType grid_sort_type;
			Int auto_standing_delay;
			RaceFlagSet flagset;
			Int online_on;
			Int is_lan;
			Int autostart_pitout;
			Int endless;
			Int allow_codriver;
			Int pace_note;
			Int team_count;
			Int ghost_type;
			Int disable_collision;
			Int boost_level;
			Int boost_params;
			Int boost_table;
			Int boost_type;
			Int boost_flag;
			void enableBoostFlag(Int bit_flag);
			void disableBoostFlag(Int bit_flag);
			Int boost_reference_rank;
			PenaltyLevelTypes penalty_level;
			Int penalty_condition;
			Int complete_laps;
			Int rolling_player_grid;
			Int packet_timeout_interval;
			Int packet_timeout_latency;
			Int packet_timeout_lag;
			Int consume_fuel;
			Int bspec_vitality10;
			Int consume_tire;
			Int temperature_tire;
			Int temperature_engine;
			Int temperature_brake;
			Int consideration_type;
			Int goal_time_use_lap_total;
			CourseMakerSourceType course_maker_source_type;
			void useLaunchData(Int unk);
			Int getLaunchSpeed(Int index);
			void setLaunchSpeed(Int index, Int speed);
			Int getLaunchPosition(Int index);
			void setLaunchPosition(Int index, Int position);
			StartType getStartTypeSlot(Int index);
			void setStartTypeSlot(Int index, StartType type);
			Array<Int> getBoostParams();
			void setBoostParams(Array values);
			void setBoostParams(Int p1, Int p2, Int p3, Int p4, Int p5, Int p6, Int p7);
			void setBoostParams2(Array values);
			void setBoostParams2(Int p1, Int p2, Int p3, Int p4, Int p5, Int p6, Int p7, Int p8, Int p9);
			void setBoostTable(Array values);
			void setBoostTable(Int p1, Int p2, Int p3, Int p4, Int p5, Int p6, Int p7, Int p8, Int p9, Int p10, Int p11)
			Array<Int> getBoostTable(Int table_index);
			void setDefault();
			void setup();
			Int start_time_offset;
			Int start_signal_type;
			void setPenaltyParameter(Int unk, Int unk2);
			void setPenaltyTime(Int unk, Int unk2);
			Int penalty_no_reset;
			LightingMode lighting_mode;
			Int academy_event;
			MBlob pack();

			/** \brief Stubbed. */
			ULong getHashCode();

			/** \brief Stubbed. */
			ULong getHashCodeForOnline();
			Int accumulation;
			Int enable_pit;
			Int pitstage_revision;
			Int vehicle_freeze_mode;
			Int course_out_penalty_margine;
			Int behavior_fallback;
			Int pit_constraint;
			Int need_tire_change;
			Int after_race_penalty_sec5;
			Int replace_at_courseout;
			Int bench_test;
			Int mu_ratio100;
			Int replace_at_overturned;
			Int enable_damage;
			LowMuType low_mu_type;
			BehaviorDamageType behavior_damage_type;
			Int gps;
			BehaviorSlipStreamType behavior_slip_stream_type;
			Int disable_recording_replay;
			GhostPresenceType ghost_presence_type;
			Int is_speedtest_milemode;
			LineGhostRecordType line_ghost_record_type;
			Int line_ghost_play_max;
			AttackSeparateType attack_separate_type;
			Int force_pitcrew_off;
			Int getEventV(Int index);
			void setEventV(Int index, Int eventV);
			void setDelayStartSecond(Int index, Int delay);
			Int getDelayStartSecond();
			void clearDelayStartSecond();
			Int getGridNum(Int slot_id);
			Int getSlotIDOnGrid(Int grid_num);
			Array<Int> getSlotIDListOnGrid();
			void clearGridList();
			Bool isRainTireRecommended();
			Array<Int> grid_list;
			Array<Int> event_v_list;
			Int event_start_v;
			Int event_goal_v;
			Int event_goal_width;
			Int weather_base_celsius;
			Int weather_max_celsius;
			Int weather_min_celsius;
			void setTemperatureFromCourseInfo();
			void setDateTimeFromCourseInfo();
			UInt weather_random_seed;
			Bool weather_random;
			Bool weather_no_schedule;
			Int weather_point_num;
			Float weather_total_sec;
			Float initial_retention10;
			Int weather_accel10;
			Int weather_accel_water_retention10;
			Bool weather_no_precipitation;
			Bool weather_no_wind;
			Bool weather_prec_rain_only;
			Bool weather_prec_snow_only;
			Bool fixed_retention;
			void setWeatherValue(Array values);
			void setWeatherValue(Int p1, Float p2, Float p3, Float p4);
			DecisiveWeather decisive_weather;
			Float weather_rate_sec1;
			Float weather_rate_sec2;
			Float weather_value0;
			Float weather_value1;
			Float weather_value2;
			Float weather_value3;
			Int weather_accel100;
			Bool enable_pilot_commander;
			void enablePilotCommandsAll();
    }		
}