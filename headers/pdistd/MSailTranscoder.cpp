using namespace System;

namespace pdistd
{
	class MSailTranscoder : public Object
	{
		public:

			MSailTranscoder() { };

			void open();
			void close();
			void start();
			void stop();
			void setKey();
			void setAudioTrack();
			void setSubtitle();
			void setSubtitleFont();
			void setSubtitleSize();
			Int progress();
			Bool isConverting();
	}
}