using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MLicenseMode : public Object
	{
		  public:
		    MLicenseMode();
			
			void connect(MOrganizer organizer);
			void setTargetSlotID(Int slot_id);
			void setFinishCondition(Array<MLicenseCondition> data);
			void setFailureCondition(Array<MLicenseCondition> data);
			void setSuccessCondition(Array<MLicenseCondition> data);
			void setSuccessConditionCount(Int unk = 0, Int unk2 = 1, Int unk = 2, Int unk = 3);
			void useBasicFinishCondition(Bool value);
			void setStopOnFinish(Bool value);
			MDriftMode fixConditions(MOrganizer org, MRaceParameter rp);
			void addGadgetType(String type);
			void addGadgetTypeToFinishList(String type);
			void addGadgetTypeToFailureList(String type);
			void addGadgetTypeToSuccessList(String type);
			void clearGadgetType();
			void setFreeCourse(Bool enable);
			void enableGadgetHitCount(Bool enable);
			UInt getHitGadgetCount_Finish();
			UInt getHitGadgetCount_Failure();
			UInt getHitGadgetCount_Success();
			UInt getHitVehicleCount();
			UInt getHitWallCount();
			UInt getCouseOutCount();
			UInt getResult();
			Float getRoadDistance();
			Float getFuelConsumption();
			Float getStartFuel();
			UInt getNowStandingTime();
			UInt getCourseOutTime();
			Int getSubModeScore();
			Bool enable;
    }
}