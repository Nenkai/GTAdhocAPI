using namespace System;

namespace gtengine
{
	/** \brief Provides information about a replay file. */
	class MReplayInfo : public Object
	{
		  public:
			MReplayInfo();

			/** \brief Calls initialize() */
			MReplayInfo(ByteData header, String file_name);

			Int initialize(ByteData header, String file_name = nil)

			/** \returns Bool int, whether replay version (Offset 0x08) is under 116 */
			VersionCheckResult checkVersion();

			/** \brief Getter-only. */
			UInt buffer_size;

			/** \brief Getter-only. */
			Int gtb_version;

			/** \brief Getter-only. */
			Int spec_version;

			/** \brief Getter-only. */
			Int spec_datadir;

			/** \brief Getter-only. */
			Int one_lap;

			/** \brief Getter-only. */
			Long recorded_datetime;

			/** \brief Getter-only. */
			Int entry_max;

			/** \brief Getter-only. */
			Int entry_num;

			/** \brief Getter-only. */
			Int total_frame_num;

			/** \brief Getter-only. */
			Int race_complete;

			/** \brief Getter-only. */
			Long filesystem_version;

			/** \brief Getter-only. */
			Int geometry_stream_size;

			/** \brief Getter-only. */
			Int geometry_quality_level;

			/** \brief Getter-only. */
			Int representative_slot_id;

			MRaceParameter getRaceParameter();
			MGameParameter getGameParameter();
			UInt getGameParameterBufferSize();
			MCarParameter getCarParameter(Int index, Bool unk = false);
			MCarDriverParameter getCarDriverParameter(Int index, Int unk2 = 0, Bool unk3 = false);
			Int getTotalTime(Int unk = nil);
			Int getBestTime(Int unk = nil);
			Int getResultOrder(Int unk = nil);
			Int getScore();
			AutomobileControllerType getControllerType(Int unk = nil);
			Int getSectorTime(Int unk, Int unk2);
			String getEntryName(Int unk);

			/** \returns Array of results
			- "size" - (UInt)
			- "frame_num" - (UInt)
			- "consumed_size" - (UInt)
			- "run_out_frame_point" - (UInt)*/
			Array<Map> getFrameDataInfoList();
    }
}