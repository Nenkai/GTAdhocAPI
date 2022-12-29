using namespace System;

namespace pdistd
{
	/** \brief Gran Turismo Server Interface */
	class MGrim2 : public Object
	{
		public:

			MGrim2() { };

			/** \brief Initializes Grim2 
			\param grim_url Url to the main server for requestServerList */
			void initialize(String grim_url, String language, Bool use_db, MBlob fingerprint = nil, String cert_name = nil, String privkey_name = nil);

			/** \brief Finalizes/deinits Grim2 entirely */
			void finalize();

			void requestLogin();
			void requestLogout();
			void decodeLogin();
			void startUpdater();
			void stopUpdater();
			void pauseUpdater();
			
			void requestRegionList();
			void decodeRegionList();

			/** \brief Requests default server list 
			\details URL based from initialize() */
			MHttpRequest requestDefaultServerList(FunctionObject<Array<Object>> callback);

			/** \brief Requests default server list (specific url) */
			MHttpRequest requestDefaultServerList(String base_url, FunctionObject<Array<Object>> callback);

			/** \brief Requests region server list 
			\details setRegion() should be called before-hand */
			void requestRegionServerList(String base_url, FunctionObject<Array<Object>> callback);

			/** \brief Requests region server list (specific url)
			\details setRegion() should be called before-hand */
			void requestRegionServerList(String base_url, FunctionObject<Array<Object>> callback);

			void requestServerList2();
			void requestSetLanguage();
			void setRegion();

			/** \brief Returns a server entity from server options
			\details Fetches a "server" node from serverlist.xml by name 
			\returns All the entries in the "server" node */
			Map getServer(String name);

			/** \brief Adds server options from a requestServerList() request */
			void addServerOption(MHttpRequest request);

			void getServerOption();
			void getServerOptionToInt();

			/** \brief Sets base url from serverlist.xml
			\details Should be used after requestServerList 
			\returns The url set from "grim_http" server option */
			String setBaseUrl();

			/** \brief Checks if server is in maintenance
			\details From server option grim_http.maintenance = 1 or 0 */
			Bool isMaintenance();

			void getMaintenanceMessage();
			void getNextMaintenanceDateTime();
			void getNextMaintenanceDisplayDateTime();

			/** \brief Sets initialization state */
			void setInitialize(Bool initialized);

			/** \brief Whether the grim instance is initialized (use setInitialize()) */
			Bool isInitialize();

			void isInitialize2();
			void join();
			void clearCallback();

			/** \brief Gets login user id if logged */
			String getLoginUserId();

			/** \brief Gets login user nickname if logged */
			String getLoginUserNickname();

			/** \brief Gets login user number (db id) if logged */
			Int getLoginUserNumber();

			void setLoginUserNickname();
			void clearCacheAll();
			void clearCacheIf();

			/** \brief Puts logs at /log/<region>/
			\details Must be initted and connected past region list requests 
			Log text will be in the X-gt-log header */
			void requestPutLog(String log);

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

			/** \brief 
			\details /ap/misc2 - log.send command */
			MHttpRequest requestLogSend(FunctionObject<Array<Object>> callback);

			void setSpecialRequestHeader();

			void getRankingAreaId();
			void requestUniqueId();
			void decodeUniqueId();
			void requestSendReport();
			void setCountry();
			void getDateTime();
			void setLanguage();

			/** \brief Gets http statistics
			\returns Statistics as a Map 
			- "numEnobufs" : (UInt)
			- "numSocketsClosed" : (UInt)
			- "numSocketsOpened" : (UInt)
			- "numTransactionsCreated" : (UInt)
			- "numTransactionsDestroyed" : (UInt)
			- "peakNumSockets" : (UInt)
			- "peakNumTransactions" : (UInt)
			*/
			Map getHttpStatistics();

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