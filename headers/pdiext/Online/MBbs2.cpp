using namespace System;

namespace pdistd
{
	/** \brief Bbs2 Server API Handler (Forums) */
	class MBbs2 : public Object
	{
		public:
			/** \brief constructor taking no param */
			MBbs2() { };
			
			void clearCallback();
			void requestCreateThread();
			void requestDeleteThread();
			void requestGetThreadList();
			void requestCreateComment();
			void requestCreateCommentPhoto();
			void requestDeleteComment();
			void requestGetCommentList();
			void requestGetCommentListNewer();
			void requestGetCommentListOlder();
			void decodeThreadList();
			void decodeCommentList();
	}
}