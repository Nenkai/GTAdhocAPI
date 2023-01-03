using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class Ranking
	{
		  public:
			RankingType type;
			Int is_local;
			Int replay_rank_limit;
			Int display_rank_limit;
			ULong board_id;
			Bool isDefault();
			String begin_date_str;
			ULong begin_date;
			MTime begin_date_mtime;
			String end_date_str;
			ULong end_date;
			MTime end_date_mtime;
			Int registration;
			RegistrationType registration_type;
		
    }		
}