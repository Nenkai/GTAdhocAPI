using namespace System;

namespace pdistd
{
	class MGpb : public Object
	{
		public:

			MGpb() { };

			/** \brief Loads a gpb from specified path */
			MGpb(String path) { };

			/** \brief Loads a gpb from specified path */
			void load(String path);

			/** \brief Unloads gpb and clears resources */
			void unload();

			/** \brief Loads the GPB's header only. */
			void loadHeaderOnly(String file_name);

			/** \brief Gets gpb data. Do not use with loadHeaderOnly - game crash. */
			MBlob get(String key_name);

			/** \brief Gets a list of files in the Gpb. Returns file name and file size.
			Can be called after loadHeaderOnly.*/
			Array<String, Long> getKeyList();
			
			/** \brief Extracts GPB 
			\param gpb_name GPB Source
			\param output_dir Output Directory
			\param unknown Must point to valid folder (not necessarily file) - seems it needs to be a GPB. it will be deleted afterwards
			\param buffer_size Buffer Size 
			\returns Result (0/1) */
			Int distribute(String gpb_name, String output_dir, String unk_gpb, Int buffer_size = 0x400);

			/** Seems stripped, doesn't do anything besides memcpy'ing into a struct that's not used */
			void beginDecrypt(ByteData data);

			/** Seems stripped, doesn't do anything */
			void endDecrypt();
			
	}
}