using namespace System;

namespace pdistd
{
	class MEventRace2 : public Object
	{
		public:

			MEventRace2() { };

			void initialize();
			void clearCallback();
			void requestOnlineEventList();
			void requestGameParameterList();
			void requestEventIconImage();
			void requestEventBgImage();
			void getOnlineEventList();
			void getGameParameterList();
			void getEventIconImagePath();
			void getEventBgImagePath();
			void requestOnlineEventList2();
			void decodeOnlineEventList();
			void decodeOfflineEventList();
			void requestEula();
			void requestSetting();
			void decodeSetting();
	}
}