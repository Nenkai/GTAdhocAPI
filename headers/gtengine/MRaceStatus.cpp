using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MRaceStatus : public Object
	{
		  public:
		    Int getEntryMax();
			Int getEntryCount();
			Int getRacersMax();
			Int getRaceEntryCount();
			Int getFocusedClassRaceEntryCount();
			Int getSectorCount();
			MRaceEntryStatus getEntry(Int unk);
			MCarStatus getCar(Int unk);
			Array<Int> getRankList();
			MSceneStatus getScene();
			MSceneTime getSceneTime();
			MPilotStatus getPilot(Int unk, Int unk2 = 0);
			MCarDriverStatus getDriver(Int unk, Int unk2 = 0);
			Bool isRenderable();
			Int checkSubModeType(Int unk);
    }
}