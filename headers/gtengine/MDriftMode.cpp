using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MDriftMode : public Object
	{
		  public:
		    MDriftMode();
			
			void connect(MOrganizer organizer);
			void reconnect(MOrganizer organizer);
			void disconnect(MOrganizer organizer);
			Int getSectionMax();
			Int getTotalScore(Int unk = -1);
			Int getLastTotalScore(Int unk = -1);
			Int getTotalGrade();
			Int getSessionBestScore(Int unk = -1);
			Int getBestScoreLocal();
			Int getSectionTotalScore();
			Int getSectionScore(Int unk = 0);
			Int getSectionGrade();
			void setTargetSlotID(Int slot_id);
			void setMySlotID(Int slot_id);
			Bool isLapMode();
			void setLapMode(Bool lap_mode);
			void setNoGoal(Bool no_goal);
			Int getSectionState();
			void clearStatus();
    }
}