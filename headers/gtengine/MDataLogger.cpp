using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Represents a real-world GPS replay. */
	class MDataLogger : public Object
	{
		  public:
		  	/** \brief constructor taking no param */
			MDataLogger() { };

			Bool initialize(String logger_filename, Int unit_velocity);
			void finalize();
			Bool openReferenceData(String logger_filename);
			void closeReferenceData();
			UInt getStartReferenceLap();
			UInt getFastestLap(UInt slot_id);
			UInt getTotalLapCount(UInt slot_id);
			ULong getLapTime(UInt slot_id, Int lap);
			ULong getLapSectionCount(UInt slot_id, Int lap);
			ULong getLapSectionPoint(UInt slot_id, Int lap, Int section_unk);

			/** \brief Getter-only. */
			ULong course_code;
			void setRunLineGraph(UInt fastest_lap);
			void setGCircleGraph(UInt fastest_lap);
			void setLatGGraph(UInt fastest_lap);
			void setLongGGraph(UInt fastest_lap);
			void setTimeDiffGraph(UInt focus_lap, UInt fastest_lap);
			void setSpeedGraph(UInt focus_lap);
			void setEngineRPMGraph(UInt focus_lap);
			void setThrottleInputGraph(UInt focus_lap);
			void setBrakeInputGraph(UInt focus_lap);
			void setGearPosGraph(UInt focus_lap);
			void setSteeAngleGraph(UInt focus_lap);
			void setWheelSpeedGraph(UInt unk, UInt focus_lap);
			void setSusStrokeGraph(UInt unk, UInt focus_lap);
			void setLoadGraph(UInt unk, UInt focus_lap);
			void setBrakerotorTempGraph(UInt unk, UInt focus_lap);
			void setOilPressureGraph(UInt unk);
			void setBoostPressureGraph(UInt unk);
			void setFuelConsumptionGraph(UInt unk);
			Bool pile_timeline;
    }
}