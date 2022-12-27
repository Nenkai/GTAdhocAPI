namespace IO
{
	class FileReader : public StreamReader
	{
		public:
		
			/// @brief constructor taking no param
			FileReader() { };
			
			/** @brief Creates a file reader and opens the specified file. */
			FileReader(String path) { };

			/** @brief Opens the specified file. */
			Bool open(String path);
	}
}