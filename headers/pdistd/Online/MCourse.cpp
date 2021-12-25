using namespace System;

namespace pdistd
{
	class MCourse : public Object
	{
		public:

			MCourse() { };
			
			void clearCallback();
			void requestList();
			void requestDelete();
			void requestUpdateTitle();
			void requestUpdateComment();
			void requestStatusPublic();
			void requestStatusComplete();
			void requestTed();
			void requestCopy();
			void requestComplete();
			void decodeCourseList();
			void getTedPath();
	}
}