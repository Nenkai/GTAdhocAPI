using namespace System;

namespace pdistd
{
	/** \brief Handler for user-provided music */
	class MSystemBGM
	{
		public:
			/** \brief cellMusicSetPlaybackCommand2 */
			static Int play();

			static Int stop();

			static Int pause();

			static Int next();

			static Int prev();

			static Int fadeout();

			/** \brief cellMusicSetVolume2 */
			static Int setVolume();

			/** \brief cellMusicGetSelectionContext2 */
			static Int getContext();

			/** \brief cellMusicSetSelectionContext2 */
			static Int setContext();

			static Int getContextSize();

			/** \brief cellMusicInitialize2 */
			static Int initialize();

			/** \brief cellMusicFinalize2 */
			static Int finalize();

			/** \brief Always use this after each command. Checks if the cell error code is success */
			static Int isSuccess(Int error_code);

			static Int isCanceled();

			/** \brief cellMusicSelectContents2 - Brings up PS3 playlist/track select */
			static Int startSelectionMenu();
	}
}