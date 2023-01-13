using namespace System;


namespace IO
{
	/** \brief Stream reader for direct file writing. */
	class FileWriter : public StreamWriter
	{
		public:
		
			/// @brief constructor taking no param
			FileWriter() { };
			
			/** @brief Creates a file writer and creates the specified file. */
			FileWriter(String path) { };

			/** @brief Creates the specified file. */
			Bool open(String path);
	}
}