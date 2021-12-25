using namespace System;

namespace pdistd
{
	class MSaveDataUtil : public Object
	{
		public:
		
			MSaveDataUtil() { };

			void save();
			void load();
			void listDelete();
			void listDeleteForCallback();
			void sync();
			void isBackgroundRunning();
			void getStatus();
			void isExistLoadFile();
			void isExistLoadDirAndFile();
			void deleteLoadBackupFile();

			Object progress;
			void resetProgress();
			Object needSizeKB;
			void setErrorMessageInfo();
			void isRecoverMode();
	}
}