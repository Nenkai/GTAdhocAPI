using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class Replay
	{
		  public:
			String local_path;
			String url;
			String demo_data_path;
			Int upload_video;
			Int export_video;
			Int video_format;
			Int audio_format;
			Int data_logger;
			ReplayRecordingQuality replay_recording_quality;
			Int auto_save;
			Bool isExpected();
			Bool isDefault();
			Bool isVideoRecord();
			void deepCopy(Replay src);
    }		
}