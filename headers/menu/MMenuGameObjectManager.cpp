using namespace System;

namespace pdistd
{
	class MMenuGameObjectManager : public MGameObjectManager
	{
		public:
			/** \brief constructor taking no param */
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