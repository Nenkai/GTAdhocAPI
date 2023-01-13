using namespace System;

namespace pdiext
{
	/** Photo Utility handler */
	class MPhotoSysUtil : public Object
	{
		public:
			/** \brief constructor taking no param */
			MPhotoSysUtil() { };

			/** \brief Loads CELL_SYSMODULE_PHOTO_EXPORT module 
			\returns Cell Result of module load */
			voiu load();

			/** \brief Unloads CELL_SYSMODULE_PHOTO_EXPORT module */
			void unload();

			Int isWaitExport();

			/** \brief cellPhotoExportInitialize2 - Initialize the export feature */
			Int initialize();

			/** \brief cellPhotoExportFinalize - Carry out termination of the export feature */
			Int finalize();

			/** \brief cellPhotoExportFromFileWithCopy - Copy and register photo file to the system software */
			Int export(String srcHddDir, String srcHddFile, String game_title, String game_comment);

			/** \brief Whether exporting is ready - all operations completed */
			Int isReady();

			/** \brief Whether finalizer is done */
			Int isFinalizeFinished();
	}
}