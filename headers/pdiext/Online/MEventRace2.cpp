using namespace System;

namespace pdistd
{
	/** \brief Seasonal/Online Event API Handler */
	class MEventRace2 : public Object
	{
		public:
			/** \brief constructor taking no param */
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