using namespace System;

namespace pdistd
{
	class MPhotoSysUtil : public Object
	{
		public:
		
			MPhotoSysUtil() { };

			void load();
			void unload();
			void isWaitExport();
			void initialize();
			void finalize();
			void export();
			void isReady();
			void isFinalizeFinished();
	}
}