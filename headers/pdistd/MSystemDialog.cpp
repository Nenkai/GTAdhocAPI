using namespace System;

namespace pdistd
{
	/** \brief Interface for showing console dialogs */
	class MSystemDialog : public Object
	{
		public:

			/** \brief Opens an error code prompt. 
			\details cellMsgDialogOpenErrorCode() */
			static String open(Int error_code);

			/** \brief Opens a regular prompt. 
			\details cellMsgDialogOpen2() 
			\param type_string N (Y/O) (N/n) D
			- N - Normal startup notice, otherwise Error notice (Bit 0-1)
			- Y = Yes/No button, O = OK button, otherwise no buttons (Bit 4-5)
			- N/n = Default position, N/n = will default on No button otherwise yes (Bit 9)
			- D - Default position (Bit 8)

			"NYND" for all options, you can also pad out the type i.e "ENYD" where "E" is just padding
			\param message Message to send, must be below CELL_MSGDIALOG_STRING_SIZE (512) characters
			\returns Result message. YES/INVALID/NO/ESCAPE/ERROR
			*/
			static String open(String type_string, String message);

			/** \brief 
			\param err_need_size_kb Size in kilobytes needed
			\param unk May have to do with the type of CELL_GAME_ERRDIALOG
			\details cellGameContentErrorDialog() */
			static Int abortDiskFull(Int err_need_size_kb = 0, Bool unk = true);
	}
}