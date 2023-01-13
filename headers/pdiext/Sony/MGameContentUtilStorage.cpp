using namespace System;

namespace pdiext
{
	/** Util for cellGameStorage (Undocumented Sony Functions) - Allows fetching usb devices */
	class MGameContentUtilStorage  : public Object
	{
		public:
			/** \brief constructor taking no param */
			MGameContentUtilStorage() { };

			/** \brief Starts the content util storage 
			\details Calls 2 undocumented cellGameStorage functions - NID 0xA9201831 & 0x50771F25 */
			Bool startGameContentUtilStorage();

			/** \brief Gets USB Device List 
			\details Calls 1 undocumented cellGameStorage function - NID 0x8DBD9594 
			\returns Array<Array<mount_point>, Array<product_str>, Array<space_kb>> */
			Array getUSBDeviceList();

			/** \brief Gets file list for a mount point
			\details Calls 2 undocumented cellGameStorage function - NID 0x8DBD9594 & 0x23EC78CE */
			Array<String> getFileList(String mount_point);

			/** \brief Gets file list with directories for a mount point
			\details Calls 2 undocumented cellGameStorage function - NID 0x8DBD9594 & 0x23EC78CE
			\returns Array<Array<mount_point>, Array<product_str>, Array<space_kb>> */
			Array<String> getFileListWithDir(String mount_point, String dir);

			/** \brief Copies a file from specified storage
			\returns Array<Array<mount_point>, Array<product_str>, Array<space_kb>> */
			Bool copyFileFromStorage(String mount_point, String file_name, String import_file_name);

			/** \brief Copies a file to specified storage
			\returns Array<Array<mount_point>, Array<product_str>, Array<space_kb>> */
			Bool copyFileFromStorage(String file_name, String mount_point, String export_file_name);

			GameContentUtilStorageError getErrorCode();

			/** \brief Getter-only. */
			MProgress progress;
	}
}