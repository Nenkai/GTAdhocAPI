using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Might be obsolete class superseeded by MReplayExportMoTeC */
	class MReplayExport : public Object
	{
		  public:
			MReplayExport() { };

			Bool initialize(Int unk, String replay_file, String logger_file);
			void finalize();
			void setOrganizer(MOrganizer organizer);
			Bool exportReplayData(Int unk);
			ULong getCourseCode();
			void setCircuitInfo(Double latitude, Double longitude, Float height, Float rotate_y, 
				Float translate_x, Float translate_y, Float translate_z);
			void setRotateY(Float rotate_y);

			/** \brief Getter-only. */
			MProgress exportProgress;
    }
}