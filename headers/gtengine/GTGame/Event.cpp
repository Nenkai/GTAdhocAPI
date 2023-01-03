using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class Event
	{
		  public:
			ULong event_id;
			GameMode game_mode;
			PlayStyle play_style;
			EventType event_type;
			Int inheritance;
			Int is_seasonal_event;
			Regulation regulation;
			Constraint constraint;
			MRaceParameter race_parameter;
			Track track;
			EntrySet entry_set;
			EvalCondition eval_condition;
			AchieveCondition achieve_condition;
			FailureCondition failure_condition;
			LicenseCondition license_condition;
			ArcadeStyleSetting arcade_setting;
			DriftCondition drift_condition;
			Reward reward;
			Ranking ranking;
			Replay replay;
			Information information;
			String begin_date_string;
			ULong begin_date;
			MTime begin_date_mtime;
			String end_date_string;
			ULong end_date;
			MTime end_date_mtime;
			StageData stage_data;
			String penalty_script;
			String ai_script;

    }		
}