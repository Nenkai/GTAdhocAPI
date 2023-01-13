using namespace System;

namespace pdistd
{
	/** \brief Custom Course Grim API Handler (Track Editor) */
	class MCourse : public Object
	{
		public:
			/** \brief constructor taking no param */
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