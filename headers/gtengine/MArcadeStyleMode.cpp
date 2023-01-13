using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MArcadeStyleMode : public Object
	{
		  public:
		  	/** \brief constructor taking no param */
		    MArcadeStyleMode() { };
			
			void connect(MOrganizer organizer);
			void setStartSeconds(Int seconds);
			void setDefaultExtendSeconds(Int seconds);
			void setLimitTimeSeconds(Int seconds);
			void setAffordTimeForLoad(UInt time);
			void setAppearStepV(Int appear_step_v);
			void setDisappearStepV(Int disappear_step_v);
			void addSpeedTrap(Float speed_trap_v);
			void clearSpeedTrap();
			void addReplaceCarCode(String code);
			void clearReplaceCarCode();
			void setLevelUpStep(Int step);
			void setOvertakeBonusTime(Int time);
			void setOvertakeBonusScore(Int score);
			void setEnableSpeedTrap(Bool enable);
			void setSpeedTrapBonusScore(Bool enable);
			void setJumpBonusScore(Bool enable);
			void setEnableJumpBonus(Bool enable);
			void clearSectionExtendTime();
			void setSectionExtendTime(Int section, Int extend_time);
			void setFromStructData(ArcadeStyleSetting setting);
			void setStartupStepV(Int startup_step_v);
			void cancelSessionScore();
			void setSpeedTrapParameter(Int unk, Int unk2, Int unk3);
			Int getRemainSeconds();
			Int getCombo();
			Int getMaxCombo();
			Int getOvertakeNum();
			Int getBestScore();
			Int getCurrentScore();
			Int getFinishBonusScore();
			Int getOvertakeBonusScore();
			Int getMaxComboBonusScore();
			Int getPerfectBonusScore();
			Int getUsedUpNOSBonusScore();
			Int getNextCarLevel(Int slot_id);
			Int getCurrentSection();
			Int target_slot_id;
    }
}