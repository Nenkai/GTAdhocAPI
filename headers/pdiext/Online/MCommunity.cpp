using namespace System;

namespace pdistd
{
	/** \brief Community Server API Handler (All community features) */
	class MCommunity : public Object
	{
		public:

			MCommunity() { };

			void clearCallback();
			void requestCreateClub();
			void requestUpdateClub();
			void requestUpdateClubRecent();
			void requestUpdateClubImage();
			void requestDeleteClub();
			void requestClub();
			void requestClubListByUser();
			void requestClubListByFavorite();
			void requestClubListByTag();
			void requestClubListByDescription();
			void requestClubListByRank();
			void requestClubListByNew();
			void requestClubListByRecommend();
			void requestJoinClub();
			void requestLeaveClub();
			void requestInviteClub();
			void requestClubFriendList();
			void requestClubIdListByUser();
			void requestAcceptUser();
			void requestBanishUser();
			void requestDeleteUser();
			void requestTransfer();
			void requestGrant();
			void requestRevoke();
			void requestAddFavoriteClub();
			void requestDeleteFavoriteClub();
			void requestCreateEvent();
			void requestUpdateEvent();
			void requestUpdateEventImage();
			void requestDeleteEvent();
			void requestEvent();
			void requestEventListByClub();
			void requestEventListByUser();
			void requestEntryEvent();
			void requestCancelEvent();
			void requestInviteEvent();
			void requestEventFriendList();
			void requestEventIdListByUser();
			void requestSendReport();
			void requestCreateEventTemplate();
			void requestUpdateEventTemplate();
			void requestDeleteEventTemplate();
			void requestEventTemplate();
			void requestEventTemplateList();
			void requestCreateEventResult();
			void requestDeleteEventResult();
			void requestEventResultList();
			void decodeClub();
			void decodeEvent();
			void decodeClubList();
			void decodeEventList();
			void decodeClubUserList();
			void decodeEventUserList();
			void decodeEventTemplate();
			void decodeEventTemplateList();
			void decodeEventResultList();
	}
}