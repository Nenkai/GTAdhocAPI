using namespace System;

namespace pdiext
{
	/** Util for Storage Data Utility (cellStorageDataImport/cellStorageDataExport)*/
	class MStorageDataUtil : public Object
	{
		public:
		
			MStorageDataUtil() { };

			/** \brief cellStorageDataImport - Import a file 
			\param srcMediaFile Path on the recording medium (mount point is not necessary). Include path from the root directory to the filename.
			\param dstHddDir File from game data folder (appended from "<GAME_CODE>/USRDIR/")
			\param param_fileSizeMax Unknown.
			\returns Error code 
			- 0 = SUCCESS (CELL_STORAGEDATA_RET_OK)
			- 1 = CANCEL (CELL_STORAGEDATA_RET_CANCEL)
			- 2 = ACCESS_ERROR (CELL_STORAGEDATA_ERROR_ACCESS_ERROR)
			- 3 = FAILURE_ERROR (CELL_STORAGEDATA_ERROR_FAILURE)
			- 4 = FATAL_ERROR (Any other error) */
			Int importStorageData(String srcMediaFile, String dstHddDir, String title, Int param_fileSizeMax);

			/** \brief cellStorageDataExport - Export a file 
			\param srcHddFile File from game data folder (appended from "<GAME_CODE>/USRDIR/")
			\param dstMediaDir Path on the recording medium (mount point is not necessary). Include path from the root directory to the filename.
			\param title Title.
			\param param_fileSizeMax Unknown.
			\returns Error code 
			- 0 = SUCCESS (CELL_STORAGEDATA_RET_OK)
			- 1 = CANCEL (CELL_STORAGEDATA_RET_CANCEL)
			- 2 = ACCESS_ERROR (CELL_STORAGEDATA_ERROR_ACCESS_ERROR)
			- 3 = FAILURE_ERROR (CELL_STORAGEDATA_ERROR_FAILURE)
			- 4 = FATAL_ERROR (Any other error) 
			\code 
			var sutil = MStorageDataUtil();
			sutil.exportStorageData("db/userdb0101.dat", "/", "My Title", 100000)
			\endcode */
			Int exportStorageData(String srcHddFile, String dstMediaDir, String title, Int param_fileSizeMax);
			
			/** \brief cellStorageDataImportMove - Move a file 
			\param srcMediaFile Path on the recording medium (mount point is not necessary). Include path from the root directory to the filename.
			\param dstHddDir Will be appended to "<GAME_CODE>/USRDIR/"
			\param title Title.
			\param param_fileSizeMax Unknown.
			\returns Error code 
			- 0 = SUCCESS (CELL_STORAGEDATA_RET_OK)
			- 1 = CANCEL (CELL_STORAGEDATA_RET_CANCEL)
			- 2 = ACCESS_ERROR (CELL_STORAGEDATA_ERROR_ACCESS_ERROR)
			- 3 = FAILURE_ERROR (CELL_STORAGEDATA_ERROR_FAILURE)
			- 4 = FATAL_ERROR (Any other error) */
			Int moveStorageData(String srcMediaFile, String dstHddDir, String title, Int param_fileSizeMax);
	}
}