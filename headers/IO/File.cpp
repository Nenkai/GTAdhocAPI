namespace IO
{
	/** \brief File utilities. */
	class File : public Module
	{
		public:
		
            /** \brief Gets the size of a file 
            \returns 0 if the file doesn't exist, or any other error */
			static Long GetFileSize(String path);

            /** \brief Gets a file's last modified time
            \returns An array with date components
            - [0] -> year (Int)
            - [1] -> month index (Int)
            - [2] -> day (Int)
            - [3] -> hour (Int)
            - [4] -> minute (Int)
            - [5] -> second (Int)
            */
            static Array<Int> GetFileModifyTime(String path)
	}
}