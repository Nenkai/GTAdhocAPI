using namespace System;

namespace pdistd
{
	/** \brief Http parameter singleton */
	class MHttp3 : public Object
	{
		public:

			MHttp3() { };

			/** \brief Inits all http modules, & sets the parameters 
			\details Calls cellHttpInit/cellSslInit/cellHttpsInit 
			\param params Parameters map
			- "fingerprint" - (Blob) 
			- "certificateName" - (String 0x20)
			- "privateKeyName" - (String 0x20)
			- "globalPoolSize" - (UInt)
			- "sslPoolSize" - (UInt)
			- "cookiePoolSize" - (UInt) 
			\returns Cell result */
			static Int init(Map params);

			/** \brief Unloads/finalizes all resources & modules 
			\details Calls cellHttpEndCookie, cellHttpsEnd, cellHttpEnd, cellSslEnd 
			\returns Cell result, should be always 0 */
			static Int end();

			/** \brief cellHttpUtilFormUrlEncode - Encodes a buffer into a form-urlencoded string 
			\param url Must be <= 0x200 */
			static String formUrlEncode(String url);

			/** \brief cellHttpUtilFormUrlDecode - Decodes a form-urlencoded string 
			\param url Mut be <= 0x200 */
			static String formUrlDecode(String url);

			/** \brief Creates transaction and sends data with cellHttpSendRequest 
			\returns Cell error code or http status code */
			static Int postByteData(String url, ByteData data);
	}
}