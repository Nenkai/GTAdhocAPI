using namespace System;

namespace pdistd
{
	class MNetworkPlatform : public Object
	{
		public:

			MNetworkPlatform() { };

			void initialize();
			void requestFriend();
			void getDateTime();
			void requestTicketRequest();
			void requestTicket();
			void getTicketStatus();
			void getTicket();
			void startSignIn();
			void openSignInDialog();
			void finishSignIn();
			void unloadSignInDialog();
			void isDialogWorking();
			void clearErrorCode();
			void abortGui();
			void isOnline();
			void getStatus();
			void getLastErrorCode();
			void getOnlineId();
			void getOnlineName();
			void getAccountAge();
			void getBirthday();
			void getLanguages();
			void getFirstLanguage();
			void getRegionLanguage();
			void getRegionName();
			void getContentsRestriction();
			void getFriendList();
			void loadInvitationData();
			void receiveAttachment();
			void receiveMessageAttachmentGui();
			void getMatchingInvitationCount();
			void getMessageCount();
			void initializeLookup();
			void isInitializedLookup();
			void finalizeLookup();
			void lookupNpId();
			void lookupProfile();
			void lookupTitleSmallStorage();
			void checkEntitlementById();
			void getEntitlementById();
			void sendMessageGui();
			void registerCustomMenu();
			void resetCustomMenu();
			void initializeProbeBandwidth();
			void finalizeProbeBandwidth();
			void probeBandwidth();
			void requestProbeBandwidth();
			void pollProbeBandwidth();
			void cancelProbeBandwidth();
			void initializeRanking();
			void finalizeRanking();
			void passVulgarityFilter();
			void setTicketServiceId();
			void setCommerceServiceId();
			void setCommunicationId();
			void setCommunicationSignature();
			void setCommunicationPassphrase();
	}
}