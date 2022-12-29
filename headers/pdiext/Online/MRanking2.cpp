using namespace System;

namespace pdistd
{
	/** \brief Ranking API Handler (Leaderboards) */
	class MRanking2 : public Object
	{
		public:

			MRanking2() { };

			void clearCallback();
			void requestRanking();
			void requestRankingCount();
			void requestRankingList();
			void requestRankingListMultiBoard();
			void requestCalcTemporaryRanking();
			void requestCalcRanking();
			void requestCalc2Ranking();
			void requestUpdateRanking();
			void requestFriendRankingList2();
			void decodeRanking();
			void decodeRankingList();
			void decodeRankingListMultiBoard();
			void requestFriendRankingList();
	}
}