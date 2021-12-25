using namespace System;

namespace pdistd
{
	class MAVChat : public Object
	{
		public:

			MAVChat() { };

			void initialize();
			void finalize();
			void finalizeAsync();
			void isInitialized();
			void isLoaded();
			void isJoined();
			void join();
			void leave();
			void startStreaming();
			void stopStreaming();
			void getSpeakerVolumeLevel();
			void setSpeakerVolumeLevel();
			void muteSpeaker();
			void muteMic();
			void isMicMute();
			void muteMember();
			void isMemberMuteLocal();
			void setStreamingTypeRoom();
			void startVoiceDetection();
			void stopVoiceDetection();
			void getMicStatus();
			void getVoiceBitrate();
			void setVoiceBitrate();
			void setStreamPriority();
			void getMember();
			void getMemberList();
			void getMemberList2();
	}
}