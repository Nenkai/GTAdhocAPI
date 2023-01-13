using namespace System;

namespace pdiext
{
	class MStreamPlayer : public Object
	{
		public:
			/** \brief constructor taking no param */
			MStreamPlayer() { };

			void load();
			void unload();
			void start();
			void stop();
			void pause();
			Object delay;
			Object bus;
	}
}