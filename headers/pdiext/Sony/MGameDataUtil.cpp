using namespace System;

namespace pdiext
{
	/** Util for cellGameCreateGameData */
	class MGameDataUtil : public Object
	{
		public:
			/** \brief constructor taking no param */
			MGameDataUtil() { };

			/** \brief Creates game data at /dev_hdd0/game. cellGameCreateGameData 
			\param dirname Directory name. Should normally be from MProductInformation::GetGameDataNameCommon()
			\param title Title of the game data - 128 bytes max
			\param parental_level PARAM.SFO parental level. Use MProductInformation::GetParentalLevel()
			\param filesize Size to allocate
			\param icon_png Image buffer of the icon
			\param bg_png Image buffer of the background
			\returns Error message
			\code
			var gdu = pdiext::MGameDataUtil();

			return gdu.createGameData("TOTALLYREALGAMECODE", "MyGameDataTime", 0, filesize,
			    main::manager.loadFile("icon.png"), 
			    main::manager.loadFile("bg.png"))
			\endcode
			*/
			String createGameData(String dirname, String title, Int parental_level, Int filesize, MBlob icon_png, MBlob bg_png);

			/** \brief cellGameDeleteGameData - Delete game data 
				\returns CELL_GAME_ERROR as Integer */
			Int deleteGameData(String dir_name);

			/** \brief Checks if a game data directory exists */
			Bool isExistGameData(String dir_name);

			/** \brief Checks if the game uses CELL_GAME_GAMETYPE_HDD and doesn't use CELL_GAME_ATTRIBUTE_DEBUG from cellGameBootCheck
			If not, returns true, game allowed to boot and returns true.
			If yes, gets the KLicensee and verifies /APP_DATA_RAW/version.edat. If successful, returns true 
			Intended for PS Store versions */
			Bool checkGameData();

			/** Unknown */
			void convertGameData();

			/** Getter only. Returns 0 on GT6 1.22 */
			Int needSizeKB;
	}
}