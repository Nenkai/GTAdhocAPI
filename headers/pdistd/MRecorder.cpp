using namespace System;

namespace pdistd
{
	/* Screen recording capabilities */
	class MRecorder : public Object
	{
		public:

			MRecorder() { };

			/* Returns cell error code */
			Int open(string path, string fileName, Int cell_video_format, Int cell_audio_format, Bool unk, Bool unk2);

			Int start();

			Int stop();

			Int close();
	}
}