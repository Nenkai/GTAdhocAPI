using namespace System;

namespace pdistd
{
	/** \brief User API Handler */
	class MUserProfile2 : public Object
	{
		public:
			/** \brief constructor taking no param */
			MUserProfile2() { };

			void clearCallback();
			void requestUserProfile();
			void requestUpdateNickname();
			void requestUpdateStats();
			void requestUpdateFriendList();
			void requestUpdateAutoMessage();
			void requestUpdateRecent();
			void requestUpdateOnlineProfile();
			void requestUpdateHelmet();
			void requestUpdateWear();
			void requestSimpleFriendList();
			void decodeUserProfile();
			void decodeUserProfileList();
			void requestSpecialStatus();
			void clearMe();
			void requestUserProfileListFriend();
			void requestSetPresence();
			void requestGetPresence();
			void decodePresenceList();
			void decodeUserProfileSimpleList();
			void requestUserSpecialList();
			void decodeUserSpecialList();
			void requestUserSpecial();
			void requestUpdateGameStats();
	}
}