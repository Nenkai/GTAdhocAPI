using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MRaceEntryStatus : public Object
	{
		  public:
		    UInt getGoalTime();
			String getGoalTimeStr();
			Int getGoalTimeDiff();
			String getGoalTimeDiffStr();
			UInt getFastestLapTime();
			String getFastestLapTimeStr();
			UInt getFastestLapTimeDiff();
			String getFastestLapTimeDiffStr();
			UInt getLatestLapTime();
			UInt getLatestLapTotalTime();
			Int getLapCount();
			Int getLapsDiff();
			Float getSectorNormalizedVCoord();
			UInt getFastestSectorTime(Int unk);
			UInt getLatestSectorTime(Int unk);
			Bool isGhost();
    }
}