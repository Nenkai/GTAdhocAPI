using namespace System;

namespace pdistd
{
	class MMusic : public Object
	{
		public:

			MMusic() { };

			void unload();
			void play();
			void playex();
			void playDirect();
			void keep();
			void keepDirect();
			void stop();
			void pause();
			void fadein();
			void fadeinDirect();
			void fadeout();
			void isPlaying();
			void isPausing();
			void getGroups();
			void getMusics();
			void getMusicInfo();
			void setCurrentVolume();
			void getNativeHandle();

			Int Number;
			Bool Repeat;
			Float volume;
			Float crossfade_time;
			
	}
}