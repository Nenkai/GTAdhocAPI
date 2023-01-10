namespace IO
{
	/** \brief Path utilities. */
	class Path : public Module
	{
		public:
		
            static String GetRelative(String src, String dest);
            static String GetAbsolute(String path, String relative_to);

            /** \brief Gets the base file name for a path 
            \details IO::Path::GetBaseName("root/file.txt") -> file.txt */
            static String GetBaseName(String path)

            /** \brief Gets the dir name for a path
            \details IO::Path::GetDirName("/folder/folder2/file.txt") -> /folder/folder2 */
            static String GetDirName(String path);

            /** \brief Gets the current directory
            \details Hardcoded to "/" */
            static String GetCurrentDir();

            /** \brief Gets whether a path is absolute
            \details Must start with / */
            static Bool IsAbsolute(String path);

            
            /** \brief Gets the full path for any path
            \details Depends on current directory */
            static Bool GetFullPath(String path);

            /** \brief Removes the extension of a path */
            static String GetFullPath(String path);

            /** \brief Gets the extension for a path (including period) */
            static String GetFullPath(String path);
	}
}