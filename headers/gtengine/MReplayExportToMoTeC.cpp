using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Replay exporter to MoTeC. */
	class MReplayExportToMoTeC : public Object
	{
		  public:
		  	/** \brief constructor taking no param */
			MReplayExportToMoTeC() { };

			Bool initialize(Int unk, String replay_file, String logger_file);
			void finalize();
			void setOrganizer(MOrganizer organizer);
			void setHeaderInformation(Int unit, Int year, Int month, Int day, Int hour, Int minute, Int second,
				String driver_name, String car_name, String course_name, String title);
			void setDriveTrainType(DriveTrainType drive_train);

			Bool exportReplayData(Int slot_id);
			ULong getCourseCode();
			void setCircuitInfo(Double latitude, Double longitude, Float height, Float rotate_y, 
				Float translate_x, Float translate_y, Float translate_z);
			
			/** \brief Getter-only. */
			MProgress exportProgress;
    }
}