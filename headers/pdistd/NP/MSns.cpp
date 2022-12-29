using namespace System;

namespace pdistd
{
	/* PSN Social Networking Services API Interface */
	class MSns : public Object
	{
		public:

			/** \brief Calling this ctor will throw an exception "prohibited action" */
			MSns() { };

			/** \brief Creates instance
			\param type 1 = NPFacebook 
			\details Any other type than facebook might allow the object to be created, but cause an engine crash */
			static void CreateInstance(Int type);

			/** \brief Initializes SNS 
			\details Loads CELL_SYSMODULE_SYSUTIL_NP_SNS & calls sceNpSnsFbInit if facebook */
			void initialize();

			/** \brief Finalizes SNS instance 
			\details Unloads module & calls sceNpSnsFbTerm if facebook */
			void finalize();

			Bool isInitialized();

			Bool isEnabled();

			/** \brief Sets the application ID */
			void setApplicationId(ULong application_id);

			/** Gets access token 
			\details sceNpSnsFbGetLongAccessToken - Obtain an access token for accessing a Facebook Graph API 
			\returns Result
			- "error" : Int
			- "token" : Long */
			Map getAccessToken();

			/** \brief Stubbed, at least on the facebook side. */
			Bool post();

	}
}