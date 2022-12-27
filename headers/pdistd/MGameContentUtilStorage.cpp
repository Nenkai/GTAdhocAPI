using namespace System;

namespace pdistd
{
	class MGameContentUtilStorage : public Object
	{
		public:

			MGameContentUtilStorage() { };

			void startGameContentUtilStorage();
			void stopGameContentUtilStorage();
			void getUSBDeviceList();
			void getFileList();
			void getFileListWithDir();
			void copyFileFromStorage();
			void copyFileToStorage();
			void getErrorCode();
			
			Object progress;
	}
}