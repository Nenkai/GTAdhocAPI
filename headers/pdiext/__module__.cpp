using namespace Adhoc;
using namespace System;

/** \brief Extended libraries (mostly Sony stuff) */
namespace pdiext
{
	/** \brief Functions for this module */
	public class __module__ : public Module
	{
		public:
			void WaitAdvertiseEnd();
			Bool IsAdvertiseBusy();

			/** \brief Sets the game's language from the system's language
			\details Depends on cellSysutilGetSystemParamInt(CELL_SYSUTIL_SYSTEMPARAM_ID_LANG)
			AvailableLanguages resource may have something to do with it too
			*/
			void SetStaticLanguage();

			/** \brief 
			\details Functions handling perf drawing are stubbed in release. */
			void SetDrawPerfMeter(Int set);

			/** \brief 
			\details Functions handling perf drawing are stubbed in release. */
			Int IsDrawPerfMeter();

			void SetFrameModeLetterBox(Int set);

			Int IsFrameModeLetterBox();

			/** \brief Waits for specified time on the render loop level 
			\details Only blocks the adhoc thread, needs more info */
			void ProcessUpdateIteration(ULong microseconds = 1000);

			/** \brief Gets race time string i.e '0:00.001' 
			\param ms Milliseconds. This is a long, but any beyond uint max value wraps the string */
			String GetRaceTimeString(Long ms);

			/** \brief Gets diff time string i.e '+00.200, +00.000, -00.200,'. 
			\param ms Milliseconds. */
			String GetDiffTimeString(Long ms);

			/** \brief Gets date time string for race context i.e '29/12/2022 03:28'44' */
			String GetDateTimeString(MTime time);

			/** \brief Gets date time string short for race context i.e '29/12/2022 03:29' */
			String GetDateTimeStringShort(MTime time);

			/** \brief Gets region/locale aware money string i.e "200" for 200, "--"" for <= 0, "20,000" for 20000 */
			String GetMoneyString(Long money);

			/** \brief Gets region/locale number string i.e "200" for 200, "20,000" for 20000 
			\param number Number.
			\param as_decimal Treat as decimal instead - 20000 will be 2,000.0 */
			String GetNumberString(Long number, Bool as_decimal = false);

			/** \brief Gets size string for number, KB up to GB
			\param size Size.
			\param scale Needs more documentation, affects how different sizes are displayed */
			String GetSizeString(Long size, Int scale = 10);

			/** \brief Constant. */
			const Int MAX_LAPTIME1000 = 1209599999;

			/** \brief Loads logo font file 
			\details If path is not provided, the singleton instance will be deinitialized 
			\param path Example: /font/logo/menu_imagefont.bin */
			void UseLogoFont(String path = nil);

			/** \brief Unknown. Compile-time value in engine. 
			\returns Should return 0. */
			Int GetDipSwitch();

			/** \brief Clears the font manager singleton's cache. */
			void ClearFontCache();

			/** \brief Gets "better" time.
			\details No idea what's so better about it. 
			Time from grim is fetched if "QABuild" resource is flagged. */
			MTime getBetterTime();

			/** \brief Gets "better" time (local version). */
			MTime getBetterTimeLocal();

			/** \brief Returns whether the game's build is intended for QA. 
			\details Checks for the compile-time "QABuild" resource. */
			Bool isQABuild();
	};
};
