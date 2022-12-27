using namespace System;

namespace pdistd
{
	class MNetworkPlatform : public Object
	{
		public:

			/** \brief Returns new NP object (based on engine singleton)
			\details Initialize will be called.
			Should be using PDINetwork.getNP() or main::NP to get the singleton instead */
			MNetworkPlatform() { };

			/** \brief sceNp2Init - Initialize NP2 */
			void initialize();

			/** \brief sceNpBasicAddFriend 
			\details NetworkPlatform must be online
			\returns SCE_NP_BASIC_ERROR */
			Int requestFriend(String contact, String message);

			/** \brief sceNpManagerGetNetworkTime - Get current time
			\details NetworkPlatform must be online
			\returns SCE_NP_ERROR */
			Int getDateTime(Bool convert_to_utc = true);

			/** \brief sceNpManagerRequestTicket2 - Request ticket
			\param cookie Cookie data (optional) - Length 1024 max
			\param entitlementId ID of consumable entitlement (optional)  
			\param consumedCount Number to consume
			\param unk Doesn't do anything by itself, but cancels operation if ((unk != 0) && (unk != 0x1e)) && (unk != 0x28)) && (unk != 0x15))
			\returns Whether request succeeded
			*/
			Bool requestTicketRequest(String cookie = "", String entitlementId = nil, Int consumedCount = 0, Int unk = 0);

			/** \brief Generic request ticket function, may call requestTicketRequest or actually request a np ticket for auth */
			MBlob requestTicket(String cookie = "", String entitlementId = nil, Int consumedCount = 0, Int unk = 0);

			Int getTicketStatus();

			/** \brief Calls sceNpManagerGetTicket */
			MBlob getTicket();

			/** \brief cellNetCtlNetStartDialogLoadAsync 
			\details Signs-in to PSN, there will be a prompt if automatic sign-in is not filled 
			Make sure to call finishSignIn and unloadSignInDialog!
			\returns 
			*/
			Int startSignIn();

			/** \brief Handles sign-in from higher level (calls startSignIn, unload, finish) 
			\returns Cell error */
			Int openSignInDialog();

			/** \brief Destroys dialog callback */
			void finishSignIn();

			/** \brief cellNetCtlNetStartDialogUnloadAsync */
			Int unloadSignInDialog();

			/** \brief Returns whether the dialog for sign-in is currently active */
			Bool isDialogWorking();

			/** \brief Clears error code */
			void clearErrorCode();

			/** \brief sceNpBasicAbortGui - Abort the currently displayed system software GUI*/
			Bool abortGui(Bool wait_for_abort);

			/** \brief Whether the current user is signed to PSN */
			Bool isOnline();

			/** \brief Get cached status from sceNpManagerGetStatus */
			Int getStatus();

			void getLastErrorCode();

			/** \brief Returns cached PSN Id for current user, empty if not online */
			String getOnlineId();

			/** \brief Returns cached PSN Name for current user, empty if not online */
			String getOnlineName();

			/** \brief Returns cached user's age from sceNpManagerGetAccountAge */
			Int getAccountAge();

			/** \brief Returns cached birthday from sceNpManagerGetAccountAge, empty if not online */
			MTime getBirthday();

			/** \brief Gets cached languages from sceNpManagerGetMyLanguages */
			Array<String> getLanguages();

			/** \brief Gets cached first language from sceNpManagerGetAccountRegion 
			\returns Array containing countryCode, language */
			Array<String> getFirstLanguage();

			Array<String> getRegionLanguage();
			void getRegionName();

			/** \brief sceNpManagerGetContentRatingFlag - Get parental control information (age-based content restriction)
			\returns Map containing "isRestricted": <Bool>, "age": <Int>*/
			Map getContentsRestriction();

			/** \brief sceNpBasicGetFriendListEntry - Get friend list entries
			\details This first calls sceNpBasicGetFriendListEntryCount(100), 100 friends max 
			\returns Comma-separated string of each friend */
			String getFriendList();
			
			/** \brief sceNpBasicRecvMessageAttachmentLoad - Load the data attachment into a buffer 
			\returns Unsure, might be ByteData and Int in array */
			Array loadInvitationData();

			/** \brief sceNpBasicRecvMessageCustom - Receive a message's attachment from a remote contact via the GUI 
			\returns Needs to be documented */
			Array receiveAttachment(Int mainType);

			/** \brief sceNpBasicRecvMessageAttachment(SYS_MEMORY_CONTAINER_ID_INVALID) - Receive a message's data attachment from a remote contact via the GUI */
			Bool receiveMessageAttachmentGui();

			/** \brief sceNpBasicGetMatchingInvitationEntryCount - Get the number of matching invitation message entries */
			Int getMatchingInvitationCount();
			
			/** \brief sceNpBasicGetMessageEntryCount - Get the number of message entries for a specified message type */
			Int getMessageCount();

			/** \brief sceNpLookupInit - Initialize the NP lookup utility */
			void initializeLookup(Int unk = 0);

			Bool isInitializedLookup();

			/** \brief sceNpLookupTerm - Terminate the NP lookup utility */
			void finalizeLookup();

			/** \brief sceNpLookupNpIdAsync & Wait - Look up an NP ID (asynchronous) */
			MPDINetworkUserId lookupNpId(String np_id);
			
			/** \brief sceNpLookupUserProfile - Obtain a user profile (synchronous) */
			MPDINetworkUserProfile lookupProfile(MPDINetworkUserId user_id);

			/** \brief sceNpLookupUserProfile - Obtain a user profile (synchronous) */
			MPDINetworkUserProfile lookupProfile(String np_id);

			/** \brief sceNpLookupTitleSmallStorage - Obtain title small storage (synchronous) 
			\details Buffer size 0x10000 */
			ByteData lookupTitleSmallStorage(ByteData data);

			/** \brief sceNpLookupTitleSmallStorage - Obtain title small storage (synchronous) */
			ByteData lookupTitleSmallStorage(UInt max_size);

			/** \brief sceNpManagerGetEntitlementById - Check or retrieve entitlement information 
			\returns SCE_NP_ERROR */
			Int checkEntitlementById(String id);

			/** \brief sceNpManagerGetEntitlementById - Check or retrieve entitlement information 
			\returns Map with
			- result (Int)
			- expire_date (MTime)
			- remaining_count (Int)
			- consumed_count (Int)
			- value (Object) */
			Map getEntitlementById();

			/** \brief sceNpBasicSendMessageGui - Send a message via the GUI 
			returns SCE_NP_BASIC_ERROR */
			Int sendMessageGui(String target, String message, String comment, ByteData unk = nil, Int unk = 0);

			/** \brief sceNpBasicSendMessageGui - Send a message via the GUI (multiple) 
			\returns SCE_NP_BASIC_ERROR */
			Int sendMessageGui(Array<MPDINetworkUserId> targets, String message, String comment, ByteData unk = nil, Int unk = 0);

			/** \brief sceNpCustomMenuRegisterActions - Register an array of custom menu items
			\param actions Array of actions, each action is "name" (String) and "mask" (Int/SceNpCustomMenuActionMask)
			\details Mask: 1 = self, 2 = friends, 4 = non-friends players, 7 = all users */
			Bool registerCustomMenu(Array<Map> actions);

			/** \brief sceNpCustomMenuActionSetActivation - Set the menu items as active/inactive */
			void resetCustomMenu();

			/** \brief Loads required modules for probing bandwidth
			\details CELL_SYSMODULE_HTTP and CELL_SYSMODULE_SYSUTIL_NP_UTIL */
			Bool initializeProbeBandwidth();

			/** \brief Unloads modules for probing bandwidth 
			\details CELL_SYSMODULE_HTTP and CELL_SYSMODULE_SYSUTIL_NP_UTIL */
			void finalizeProbeBandwidth();

			/** \brief Probes bandwidth in one go - initializes, requests, cancels if fail and finalizes */
			Map probeBandwidth(Int cached_limit = -1, Bool finalize_once_done = false);

			/** \brief sceNpUtilBandwidthTestInitStart - Start bandwidth test 
			\details Modules must be loaded before with initializeProbeBandwidth()
			stack_size is set to 0x2000 
			\returns SCE_NP_ERROR */
			Int requestProbeBandwidth();

			/** \brief sceNpUtilBandwidthTestGetStatus - Get progress of bandwidth test 
			\details Calls sceNpUtilBandwidthTestShutdown - End bandwidth test and get results 
			\returns Map with results 
			- "finish" : (Bool)
			- "up" : (UInt)
			- "down" : (UInt)*/
			Map pollProbeBandwidth();

			/** \brief sceNpUtilBandwidthTestShutdown - Cancels bandwidth check */
			void cancelProbeBandwidth();

			/** \brief sceNpScoreInit & sceNpScoreCreateTitleCtx, finalizeRanking() called if failed */
			Bool initializeRanking();

			/** \brief sceNpScoreTerm */
			void finalizeRanking();

			/** \brief sceNpScoreSanitizeComment - Correct inappropriate character string (synchronous) 
			\param text Text to sanitize
			\param only_censor sceNpScoreCensorComment called instead, sanitized will be empty
			\param initialize_ranking whether to call initializeRanking()
			\returns Map with results
			- "error" : (Int)
			- "filtered" : (Bool)
			- "sanitized" : (String)*/
			Map passVulgarityFilter(String text, Bool only_censor = true, Bool initialize_ranking = true);

			/** \brief Sets NpKeyHolderPS3 singleton ticket service id */
			void setTicketServiceId(String ticket_service_id);

			/** \brief Sets NpKeyHolderPS3 singleton commerce service id */
			void setCommerceServiceId(String commerce_service_id);

			/** \brief Sets NpKeyHolderPS3 singleton communication id */
			void setCommunicationId(String communication_id);

			/** \brief Sets NpKeyHolderPS3 singleton communication signature */
			void setCommunicationSignature(MBlob signature);

			/** \brief Sets NpKeyHolderPS3 singleton communication passphrase */
			void setCommunicationPassphrase(MBlob passphrase);
	}
}