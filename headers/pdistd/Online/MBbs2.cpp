using namespace System;

namespace pdistd
{
	class MBbs2 : public Object
	{
		public:

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