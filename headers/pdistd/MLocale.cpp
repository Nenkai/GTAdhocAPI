using namespace System;

namespace pdistd
{
	/** */
	class MLocale : public Object
	{
		public:

			/** \brief Gets the current language i.e "GB" */
			static String getLanguage();

			/** \brief Sets the global language i.e "GB" */
			static String setLanguage(String lang);

			/** \brief Gets the default language i.e "GB"
			\details Depends on result from cellSysutilGetSystemParamInt(0x111) at boot */
			static String getDefaultLanguage(String resource);

			/** \brief Gets an ordinal suffix based on the current language i.e "th" for 0 */
			static String getOrdinalSuffix(Int number = 0);

			/** \brief Unknown. 
			\details Returned [(String)("EL"),(String)("CZ"),(String)("HU")] */
			static Array<String> getOutOfSystemLanguages();
	}
}