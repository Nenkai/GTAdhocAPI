using namespace System;

namespace pdistd
{
	/** \brief Replay API Handler (Replay Sharing & Fetching) */
	class MReplay2 : public Object
	{
		public:
			/** \brief constructor taking no param */
			MReplay2() { };

			void clearCallback();
			void requestReplay();
			void requestUpdateReplay();
			void getPath();
			void isExist();
			void getDiskFreeSizeKB();
			void getRequireSizeKB();
			void requestReplayMark();
			void requestUpdateReplayMark();
			void getReplayMarkPath();
			void isReplayMarkExist();
	}
}