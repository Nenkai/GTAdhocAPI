using namespace System;

namespace pdistd
{
	// Document later
	class MSound : public Object
	{
		public:

			MSound() { };

			void load();
			void unload();
			void play();
			void playSingle();
			void keepMusic();
			void startMusic();
			void stopMusic();
			void fadeOutMusic();
			void fadeInMusic();
			void startStream();
			void startStreamEx();
			void stopStream();
			void pauseStream();
			void isPlayingStream();
			void getEffectCodeList();

			Object midi;
			Object stream;

			Object default;
			Object menu_se_volume;
			Object code_map;

	}
}