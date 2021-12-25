using namespace System;

namespace pdistd
{
	class MVoucher : public Object
	{
		public:
		
			MVoucher() { };

			void loadDRMModule();
			void unloadDRMModule();
			void buildIndex();
			void indexFirst();
			void indexNext();
			void indexIsDone();
			void indexLoadFile();
			void indexIsValidNow();
	}
}