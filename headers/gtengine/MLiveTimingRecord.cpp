using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Live Timing Record */
	class MLiveTimingRecord : public Object
	{
		  public:
		    MLiveTimingRecord() { };

			Array<MLTEntry> getEntries(Bool unk, Int unk2 = 0);
			MLTEntry getEntry(Int unk, Int unk = 0);
			MLTEntry getBestLapEntry(Int unk = 0);
			Array<Int> getRankingTable(Int unk = 0);
			Array<Int> getRankingList(Int unk = 0);
			UInt getTopLaps(Int unk = 0);
			void needPreviousResult(Int unk = 0);
			Int countEnabled(Int unk = 0);
			Int countClass(Int unk = 0, Long unk2 = 0);
			Int countLaps(Int unk = 0, Long unk2 = 0);
			Int countOption1(Int unk = 0, Long unk2 = 0);
			Int countOption2(Int unk = 0, Long unk2 = 0);
			void setDropSession();

    }		
}