using namespace System;

namespace pdistd
{
	class MRTextManager : public Object
	{
		public:

			MRTextManager() { };

			void setRegion();
			void setRegionedTable();
			void clearRegionedTable();
			void reserveMemoryCommon();
			void loadCommon();
			void unloadCommon();
			void pushDB();
			void popDB();
			void getStr();
			void useDevelopmentFile();

			Bool debug;

	}
}