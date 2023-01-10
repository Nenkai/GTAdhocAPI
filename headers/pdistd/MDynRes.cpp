using namespace System;

namespace pdistd
{
	/** \brief Dynamic Resources handler
	\details Built-in keys:
	- BgmLibraryFile (String)
	- fsroot (BD)

	- AvailableLanguagesSCEJ (String)
	- AvailableLanguagesSCEE (String)
	- AvailableLanguagesSCEA (String)
	- AvailableLanguagesSCEH (String)
	- AvailableLanguagesSCEL (String)
	- AvailableLanguagesSCEB (String)
	- AvailableLanguagesSCEA_PDI (String)
	- AvailableLanguagesQA (String)	

	- GT6_FINGERPRINT (Blob)
	- GT6_FINGERPRINT_SIZE (Int)
	- GT6_CLIENT_CERTIFICATE (String)
	- GT6_CLIENT_PRIVATEKEY (String)
	- GT5P_TVBASEKEY (String)	

	- SgxInstrumentDirectory (String)
	- SgxInstrumentFiles (String)
	 */
	class MDynRes : public Object
	{
		public:

			static String importString(String resource);
			static Bool importBool(String resource);
			static Int importInt32(String resource);
			static Float importFloat(String resource);
			static MBlob importBlob(String resource, String resource_size);

			static void setBool(String resource, Int value);
			static void setInt32(String resource, Int value);
			static void setFloat(String resource, Float value);
	}
}