using namespace System;

namespace pdistd
{
	class MWebAd : public Object
	{
		public:

			/** \brief constructor taking no param */
			MWebAd() { };

			/** \brief Sets the local path where adhoc modules are stored */
			void setFileRootPath(String path);

		class webad
		{
			static void nl2br();
			static void uriencode();
			static void echo();
			static void print();
			static void header();
		}
	}
}