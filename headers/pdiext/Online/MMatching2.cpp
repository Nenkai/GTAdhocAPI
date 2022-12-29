using namespace System;

namespace pdistd
{
	/** \brief Matching API Handler (Quick Match) */
	class MMatching2 : public Object
	{
		public:

			MMatching2() { };

			void clearCallback();
			void requestEnterGame();
			void requestCreateGame();
			void requestJoinGame();
			void requestLeaveGame();
			void requestStartGame();
			void requestLobbyStatus();
			void requestHeartBeat();
			void requestSetJoinable();
			void decodeEnterGame();
			void decodeCreateGame();
			void decodeJoinGame();
			void decodeLobbyStatus();
			void decodeSetJoinable();
	}
}