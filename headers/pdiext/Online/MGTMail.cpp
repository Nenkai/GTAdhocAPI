using namespace System;

namespace pdistd
{
	/** \brief Mail API Handler (Messages) */
	class MGTMail : public Object
	{
		public:
			/** \brief constructor taking no param */
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