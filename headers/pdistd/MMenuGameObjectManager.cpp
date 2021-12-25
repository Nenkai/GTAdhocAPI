using namespace System;

namespace pdistd
{
	class MMenuGameObjectManager : public Object
	{
		public:

			MMenuGameObjectManager() { };

			void initialize();
			void finalize();
			void pauseRender();
			void setProjectRoot();
			void start();
			void sync();
			void syncRealized();
	}
}