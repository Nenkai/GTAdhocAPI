using namespace System;

namespace pdistd
{
	class MGrim2 : public Object
	{
		public:

			MGrim2() { };

			void initialize();
			void finalize();
			void requestLogin();
			void requestLogout();
			void decodeLogin();
			void startUpdater();
			void stopUpdater();
			void pauseUpdater();
			void requestRegionList();
			void decodeRegionList();
			void requestDefaultServerList();
			void requestRegionServerList();
			void requestServerList2();
			void requestSetLanguage();
			void setRegion();
			void getServer();
			void addServerOption();
			void getServerOption();
			void getServerOptionToInt();
			void setBaseUrl();
			void isMaintenance();
			void getMaintenanceMessage();
			void getNextMaintenanceDateTime();
			void getNextMaintenanceDisplayDateTime();
			void setInitialize();
			void isInitialize();
			void isInitialize2();
			void join();
			void clearCallback();
			void getLoginUserId();
			void getLoginUserNickname();
			void getLoginUserNumber();
			void setLoginUserNickname();
			void clearCacheAll();
			void clearCacheIf();
			void requestPutLog();
			void requestServerTime();
			void decodeServerTime();
			void getServerTime();
			void getClientTime();
			void isWrongClientTime();
			void getUrlBase();
			void requestUrlBase2();
			void decodeUrlBase2();
			void requestSetBand();
			void requestExtendSession();
			void requestLock();
			void requestUnLock();
			void requestGetCounter();
			void decodeCounter();
			void requestIncrementCounter();
			void decodeIncrementCounter();
			void requestLogSend();
			void setSpecialRequestHeader();
			void getRankingAreaId();
			void requestUniqueId();
			void decodeUniqueId();
			void requestSendReport();
			void setCountry();
			void getDateTime();
			void setLanguage();
			void getHttpStatistics();
			void setHttpServerParams();
			void convertHttpResultToId();
			void requestCheckEntitlement();
			void requestEulaAgreement();
			void isEulaEnable();
			void requestEula();
			void decodeEula();
			void requestAcademy();
			void decodeAcademy();
			void requestUploadPersonalInformation();
			void getFixedBetterTimeSecond();
			void setFixedBetterTimeSecond();
	}
}