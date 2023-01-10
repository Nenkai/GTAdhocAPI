using namespace System;
using namespace Adhoc;


/** \brief Standard Library for Adhoc */
namespace pdistd
{
	/** \brief Functions for this module */
	public class __module__ : public Module
	{
		public:

		  	/** \brief Delays the threads by the specified amount of milliseconds. */
			static void DelayThread(Int milliseconds = 1000);

			/** @brief Stripped as release. */
			static void BusyWait();

			/** \brief Returns command line arguments */
			static string GetArgs();
			
			/* PFGMemSetPrefix PFGMemGetRedist PFGMemSetRedist PFGMemGetExpand PFGMemSetExpand */
			static Long GetTsmOptionInt32();
			
			/* PFGMemSetPrefix PFGMemGetRedist PFGMemSetRedist PFGMemGetExpand PFGMemSetExpand */
			static Long GetTsmOptionInt64();

			static Int SetTsmOptionInt32(String param, Long value);

			static Int SetTsmOptionInt64(String param, Long value);

			/// @brief Returns the VOL Version. 0 for FSRoot
			static Long GetFileSystemVersion();
			
			static Array GetFileSystemOptionInt32(String path, String option);
			
			/** Options:
					GetInstalledFileSize
			*/
			static Array GetFileSystemOptionInt64(String path, String option);
		
			static Int SetFileSystemOptionInt32(String path, String option, Int value);
			
			static Int SetFileSystemOptionInt64(String path, String option, Long value);
			
			static Int SetFileSystemOptionString(String path, String option, Long value);
			
			/** \brief Returns info a about a file or directory.
			\returns File object Map
			- "_time" -> (MTime)
			- "compressed" -> (Int)
			- "compressed_size" -> (Int)
			- "name" -> (String)
			- "size" -> (Long)
			- "type" -> (String) (DIRECTORY, COMPRESSED, REGULAR, UNKNOWN) */
			static Map GetFileStatus(String path);
		
			/** @brief Converts a path into a PS3 friendly one. nil returns current directory. */
			static String ConvertSystemPath(String path = nil);

			/// @brief Returns whether a path exists.
			static Int Exist(String path);
			
			/** \brief Returns file info and its buffer. 
			\returns Returns a map, for which
			- "_time" -> (Int)
			- "buffer" -> (MBlob), nil if not a file
			- "compressed_size" -> (Int)
			- "result" -> (FileError)
			- "type" -> (Int)
			*/
			static Map ReadFile(String path);
			
			/// @brief Writes a file.
			static Int WriteFile(hString path, ByteData buffer);

			/// @brief Writes a file.
			static Int WriteFile(hString path, ByteData buffer, Int size);
			
			/// @brief Deletes a file.
			static Int RemoveFile(String path);
			
			/// @brief Renames a file.
			static Int RenameFile(String src_name, String target_name);
			
			/// @brief Copies a file
			static Int CopyFile(String src, String dst);
			
			/// @brief Truncates a file.
			static Int TruncateFile(String path, Int offset);
			
			/** \brief Creates a directory
			  * \param path Directory.
			  * \param recursive Whether to create sub-dirs provided by the paths. If disabled and the path contains subdirs, no directory will be created at all.
			*/
			static Int MakeDirectory(String path, Bool recursive = false);

			/** \brief Creates directories for a specified file. */
			static Int MakeDirectoryForFile(String path_to_file);

			/** \brief Removes a directory
			  * \param path Directory.
			  * \param recursive Whether to remove sub-dirs from the parent path. If disabled and the path contains subdirs, no directory will be removed at all.
			*/
			static Int RemoveDirectory(String path, Bool recursive = false);

			/** \brief Deflates (compress) object buffer (calls toString to it if applicable) */
			static MBlob Deflate(Object obj);

			/** \brief Deflates (compress) and encrypts object buffer (calls toString to it if applicable) asynchronously */
			static MBlob DeflateEncryptAsync(String path, Bool unk);
			
			/** \brief Inflates (decompresses) object buffer (calls toString to it if applicable) asynchronously */
			static MBlob Inflate(Blob blob);
			
			/** \brief Decrypts and Inflates (decompresses) and encrypts object buffer (calls toString to it if applicable) asynchronously */
			static MBlob DecryptInflateAsync(String path, String unkPathS, Bool unk);
			

			/** \brief Returns the list of files for a provided path.
			\returns Returns a map for each file, for which
			- "compressed_size" -> (Long)
			- "name" -> (String)
			- "size" -> (Long)
			- "type" -> (String) (DIRECTORY, COMPRESSED, REGULAR, UNKNOWN)
			*/
			static Array<Map> GetFileEntries(String path);
			
			/** \brief Gets disk free size for specified mount point (i.e /APP_DATA) */
			static Long GetDiskFreeSize(String path);
			
			/// @brief Returns the amount of files being installed
			static Int GetOnDemandInstallingFiles();
			
			/** \brief Encodes an object buffer to Base64 */
			static String EncodeBase64(Object obj);
			
			/** \brief Decodes data from Base64 */
			static MBlob DecodeBase64(Object obj);
			
			/** \brief Unknown */
			static Int CheckRights();
			
			/** \brief Performs CRC32 for object buffer */
			static Int CRC32(Object obj);
			
			/// @brief Stripped as release.
			static void assert(String message);
			
			/// @brief Initiates a crash.
			static void crash(String message = nil);
			
			/// @brief Exits the game.
			static void exit(Int exitCode);
			
			/// @brief Gets the system time in microseconds (calls sys_time_get_system_time).
			static Long GetSystemTimeMicroSecond();
			
			/// @brief Gets the system time in milliseconds (calls sys_time_get_system_time / 1000).
			static Long GetSystemTimeMillisecond();

			static Int GetHeapTotalSize();
			static UInt GetHeapFreeSize();
			static UInt GetHeapAllocateMax();
			static Long GetHeapMeter()
			
			/// @brief Stripped as release.
			static void DumpMemoryBlock();
			
			/** \brief Returns whether the game is a debug version (compile time value on engine) */.
			static Int IsDebugVersion();

			/// @brief Refer to pdistd::Language.
			static void SetLanguage(Language language);
			
			/// @brief Hashes a string.
			static ULong AsciiStringHash(String str);
			
			/// @brief Gets the current PS3 Profile Name.
			static String SysParamCurrentUserName();
			
			/// @brief Gets the current PS3 Parental Level.
			static Int SysParamParentalLevel();
			
			/// @brief Returns the count of game boot attributes.
			static Int GetGameBootAttribute();
			
			/// @brief Unk (3 args) (self.base_rank_list, racers_list, racer_count)
			static Array TraceRankList();
			
			/// @brief Gets the current PS3 Profile Name.
			static String getPlayerName();

			

			
			static Float atan2(Float y, Float x);
			
			static Unknown applyMatrixVector4();

			static Unknown inverseMatrix();
			
			static Unknown multiplyMatrix();
			
			static Unknown DeviceRescan();

			static Unknown GetTsmOptionSize();
			
			static Unknown SetTsmOptionSize();
					
			/// @brief MD5 Checksum
			static String MD5(String arg);
			
			/// @brief Returns ram left in bytes - Might be stubbed
			static UInt GetAvailableUserMemorySize();
			
			/// @brief Gets the total of memory usable in bytes - Might be stubbed
			static UInt GetTotalUserMemorySize();

			static ByteData Salsa20Encrypt(String key, Object data);

			static ByteData Salsa20Decrypt(String key, Object data);

			/// @brief Converts text. Warning: not providing the arg crashes the game.
			static String TextConv(String str);

	};
};
