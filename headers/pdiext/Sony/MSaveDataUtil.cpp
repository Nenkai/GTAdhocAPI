using namespace System;

namespace pdiext
{
	/** Util for cellGameCreateGameData */
	class MSaveDataUtil : public Object
	{
		public:
		
			MSaveDataUtil() { };

			SaveDataUtilError save(SaveDataUtilMode mode, Bool can_copy, Bool bind_check, Bool make_backup, Bool compress,
			 Bool abort_request, Bool create_new, String dir_name, String save_filename, String input_filename,
			 String title, String subtitle, String description, String list_param, String icon_title, 
			 String icon_png_name = "", String bg_png_name = "", String unk = nil, String unk2 = nil, 
			 Int indicator_position = 0, Int indicator_align = 0, Int indicator_mode = 0, String indicator_message, ByteData indicator_png_name = nil);

			SaveDataUtilError save(SaveDataUtilMode mode, 
				Bool can_copy, 
				Bool bind_check, 
				Bool make_backup, 
				Bool compress,
			 	Bool abort_request, 
				Bool create_new, 
				String dir_name, 
				String save_filename, 
				String input_filename,
			 	String title, 
				String subtitle, 
				String description, 
				String list_param, 
				String icon_title, 
			 	String icon_png_name = "", String bg_png_name = "", 
				String unk = nil, String unk2 = nil, 
			 	Int indicator_position = 0, 
				Int indicator_align = 0, 
				Int indicator_mode = 0, 
				String indicator_message = nil, 
				ByteData indicator_png_name = nil);

			SaveDataUtilError save(SaveDataUtilMode mode, 
				Bool can_copy, 
				Bool bind_check, 
				Bool compress,
				String dir_name, 
				String load_filename, 
				String output_filename,
			 	Int indicator_position = 0, 
				Int indicator_align = 0, 
				Int indicator_mode = 0, 
				String indicator_message = nil, 
				ByteData indicator_png_name = nil);

			/** \brief Enables overlay (cellSaveDataEnableOverlay(1)) & cellSaveDataDelete2 - Deletes save*/
			Int listDelete();

			void listDeleteForCallback();

			Int sync();

			Bool isBackgroundRunning();

			SaveDataUtilError getStatus();

			Bool isExistLoadFile(String dir_name);

			Bool isExistLoadDirAndFile(String dir_name, String file_name);

			Bool deleteLoadBackupFile(String file_name);

			/** \brief Getter-only. */
			MProgress progress;

			void resetProgress();

			/** \brief Getter-only. Gets the required size (to display to the user)*/
			Int needSizeKb;

			void setErrorMessageInfo(String no_space_message, String bindcheck_message, 
				String delete_other_files_message, String abort_save_message, 
				String other_message, String no_savedata_message,
				String retry_save_message, String not_done_message, String abort_game_message);

			Bool isRecoverMode();
	}
}