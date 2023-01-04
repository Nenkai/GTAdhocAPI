using namespace System;

namespace pdistd
{
	/** \brief Wrapper around cellVideoExport (Sony) */
	class MVideoExport : public Object
	{
		public:

			MVideoExport() { };

			/** \brief cellVideoExportInitialize2 - Initialize the video utility (without a memory container)
			\returns Cell error code */
			Int open();

			/** \brief cellVideoExportFinalize - Terminate the video utility
			\returns Cell error code */
			Int finalize();

			/** Unloads the cellVideoExport PRX module */
			void close();

			/** \brief cellVideoExportFromFile - Move and register a video file to the system software 
			\returns Cell error code */
			Int start(String dir, String file_name = nil, String title = nil, String game_title = nil, Int game_comment = nil);

			/** \brief Getter-only. cellVideoExportProgress - Get progress status of a video file copy processing */
			Float progress();
			
			/** \brief Returns whether exporting is in progress */
			Bool isExportingNow();

			/** \brief Getter-only. Gets result of export 
			\returns Cell error code */
			Int result;
	}
}