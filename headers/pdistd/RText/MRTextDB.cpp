using namespace System;

namespace pdistd
{
	class MRTextDB : public Object
	{
		public:

			MRTextDB() { };

			void load();
			void unload();
			void get();

	}
}