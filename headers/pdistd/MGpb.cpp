using namespace System;

namespace pdistd
{
	class MGpb : public Object
	{
		public:

			MGpb() { };

			void load();
			void unload();
			void loadHeaderOnly();
			void get();
			void getKeyList();
			void distribute();
			void beginDecrypt();
			void endDecrypt();
			
	}
}