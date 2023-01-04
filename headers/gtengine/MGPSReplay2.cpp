using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Represents a real-world GPS replay. */
	class MGPSReplay2 : public Object
	{
		  public:

		    MGPSReplay2();
			
			void initialize(MOrganizer organizer);
			void finalize();

			/** \brief Stubbed. */
			void test();
			void analyzeFrame(String file_name);
			void extractFrame(String file_name, String can_tmp_file_path, Int number);
			Int getFrameNum();
			Int getSofDate(Int i);
			Int getEofDate(Int i);
			Int getSofTime(Int i);
			Int getEofTime(Int i);
			Int getSofFileOffset(Int i);
			Int getEofFileOffset(Int i);
			void setConverter(GPSCANDataConverter converter);
			void convertCanFile(String input_can_filename, String output_rt_filename, String output_gps_filename);
			void setCourseCode(ULong);
			void checkGpsAndCar(String can_filename);
			void checkGpsAndCarOnUSBFile(String filename);
			void applyOffset(String convert_rt_filename, String offset_rt_filename, String gpsdata_bin_filename);
			GPSCANDataCarType getCarType();
			UInt getErrorCode();
			UInt getTotalReplayTime();
			UInt getUserReplayTime();
			Bool isConvertSuccess();
			Float getAutoOffsetX();
			Float getAutoOffsetZ();
			Int getLapNum();
			Int getLapBeginTime(Int i);
			Int getLapEndTime(Int i);

			/** \brief Getter-only. */
			MProgress convertProgress;

			void resetConvertProgress();
			void setLapUserOffset(Int lap_number, Float offset_x, Float offset_y);
			Float getLapUserOffsetX(Int lap_number);
			Float getLapUserOffsetZ(Int lap_number);
			void setWholeUserOffset(Float offset_x, Float offset_y);
			Float getWholeUserOffsetX();
			Float getWholeUserOffsetZ();
			void setTrimTime(Int start_time, Int end_time);
			Bool circuitMatching(Float longitude, Float lattitude, Float gps_longitude, Float gps_latitude, Float max_distance);
			void setCircuitGpsInfo(String label, Float longitude, Float latitude, Float height, Float rotate_y, Float offset_x, 
				Float offset_z, Float start_lat, Float start_lon, Float goal_lat, Float goal_lon, Float start_goal_radius);

			void setCircuitReverseModifyPoint(Float unk, Float unk2, Float unk3, Float unk4);
			
			/** \brief Getter-only. */
			Float first_latitude;

			/** \brief Getter-only. */
			Float first_longitude;

			/** \brief Getter-only. */
			Int first_date;

			/** \brief Getter-only. */
			Int first_time;

			void makeGpsReplayData(String offset_rt_filename, String gpsreplay_rt_file, String replay_name);
			UInt getCurrentTime();
			Bool openLoggerFile(String gpsreplay_rt_filename, Int total_size, Bool unk);
			void closeLoggerFile();
			Int steering_gear_ratio
			Int gps_antenna_mount_side;
			Int gps_antenna_mount_dir;
			Bool setCompensationRunLine(GPSReshapeFilterTypes type, Float road_width);
			void resetDetectPitArea();
			void setAutoLapOffsetMode(Int unk);
			void setLapTrimMode(Int mode);
			void setRawGpsRate(Float rate);
			void setHeadingDelay(Float delay);
    }
}