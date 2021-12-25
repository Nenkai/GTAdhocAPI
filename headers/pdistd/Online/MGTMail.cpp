using namespace System;

namespace pdistd
{
	class MGTMail : public Object
	{
		public:

			MGTMail() { };

			void clearCallback();
			void requestSendMail();
			void requestAllMailList();
			void requestReadTo();
			void requestDeleteByFrom();
			void requestDeleteByTo();
			void decodeMailList();
	}
}