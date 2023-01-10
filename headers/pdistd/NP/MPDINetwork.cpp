using namespace System;
using namespace gtengine;

namespace pdistd
{
	/** \brief PDI Network/Server Interface */
	class MPDINetwork : public Object
	{
		public:

			MPDINetwork() { };

			void setPdiServerUserId();
			void setPdiServerUserNickname();
			void getPdiServerUserNumber();
			void setPresence();
			void getFriendList();
			void getBlockedUserList();
			void showFriendList();
			void hideFriendList();
			void showProfile();
			void abortShowProfile();
			void sendChatMessage();
			void setNetworkSystem();
			void initialize();
			void finalize();
			void initializeNp();
			void switchLobby();
			void clearRoomParameter();
			void isChatRestricted();
			void initializeClan();
			void finalizeClan();
			void isInitializedClan();
			void initializeProbeBandwidth();
			void finalizeProbeBandwidth();
			void requestProbeBandwidth();
			void pollProbeBandwidth();
			void cancelProbeBandwidth();
			void initializeTrophy();
			void finalizeTrophy();
			void isInitializedTrophy();
			void waitUntilTrophyInitialized();
			void unlockTrophy(TrophyType trophy);
			void unlockTrophyAsync(TrophyType trophy);
			void getUnlockTrophyResult();
			void checkUnlockTrophyResult();
			void getTrophyAchievementRate();
			void getTrophyRequiredDiskSpace();
			void checkTrophyRequiredDiskSpace();
			void getTrophyUnlockState();
			void setTrophyUnlockRestriction();
			void setTrophySoundLevel();
			void startUpdate();
			void endUpdate();
			void startWebServer();
			void stopWebServer();
			void getClientName();
			void getDisplayName();
			void getRegionName();
			void getNP();
			void getNetworkTime();
			void setTimeoutSecond();
			void setupTimeout();
			NetworkError getLastError();
			NetworkError getFirstError();
			void getFirstErrorPacked();
			void getLastErrorPacked();
			void setLastError();
			void clearError();
			void getMyUserId();
			void getMyUserIdExtra();
			void addUserList();
			void removeUserList();
			void clearUserList();
			void resetUserListCheckedState();
			void getCommunicatorIndex();
			void setGameInfo();
			void setGameInfoApplicationWork();
			void setUseLAN();
			void isLAN();
			void isOnline();
			void isInitialized();
			void isDummy();
			void getUseNickname();
			void setUseNickname();
			static void ConvertIPv4Address32();
	}
}