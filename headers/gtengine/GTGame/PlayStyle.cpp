using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class PlayStyle
	{
		  public:
			BSpecType bspec_type;
			PlayType play_type;
			Int no_quickmenu;
			Int no_instant_replay;
			Int replay_record_enable;
			Int rentcar_setting_enable;
			Int window_num;
			Int time_limit;
			Int leave_limit;
			Bool isDefault();

    }		
}