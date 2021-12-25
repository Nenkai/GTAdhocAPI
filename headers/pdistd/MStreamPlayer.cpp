using namespace System;

namespace pdistd
{
	class MStreamPlayer : public Object
	{
		public:
		
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