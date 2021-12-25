using namespace Adhoc;

namespace pdistd
{
	public class __static__ : public Module
	{
		public:
			/// @brief Returns command line arguments
			static string GetArgs();
			
			/// @brief Returns the VOL Version. 0 for FSRoot
			static Long GetFileSystemVersion();
			
			static Int GetFileSystemOptionInt32(String path, String option);
			
			/** Options:
					GetInstalledFileSize
			*/
			static Long GetFileSystemOptionInt64(String path, String option);
		
			static void SetFileSystemOptionInt32();
			
			static void SetFileSystemOptionInt64();
			
			static void GetFileSystemOptionInt32(Int option);
			
			static void GetFileSystemOptionInt64(Long option);
			
			/// @brief Returns the list of files for a provided path.
			/* Returns a map for each file, for which
				"compressed_size" -> hLong
				"name" -> hName
				"size" -> hLong
				"type" -> hString (DIRECTORY, COMPRESSED, REGULAR, UNKNOWN)
			*/
			static Array<Map> GetFileEntries(String path);
				
			/// @brief Delays the threads by the specified amount of milliseconds.
			static void DelayThread(hInt milliseconds = 1000);
			
			/** Returns info a about a file or directory.
				Returns a map, for which
					"_time" -> MTime
					"compressed" -> hInt
					"compressed_size" -> hInt
					"name" -> hName
					"size" -> hLong
					"type" -> hString (DIRECTORY, COMPRESSED, REGULAR, UNKNOWN) */
			static hMap GetFileStatus(String path);
		
			/// @brief Converts a path into a PS3 friendly one. nil returns current directory.
			static String ConvertSystemPath(String path = nil);
			
			/// @brief Returns whether a path exists.
			static Int Exist(String path);
			
			/// @brief Returns file info and its buffer. 
			/*
				Returns a map, for which
					"_time" -> hInt
					"buffer" -> mBlob, nil if not a file
					"compressed_size" -> hInt
					"result" -> hInt
					"type" -> hInt
			*/
			static Map ReadFile(String path);
			
			/// @brief Appends a file.
			static Int WriteFile(hString path, Blob buffer, Int size);
			
			/// @brief Deletes a file.
			static Int RemoveFile(String path);
			
			/// @brief Renames a file.
			static Int RenameFile(String path);
			
			/// @brief Copies a file
			static Int CopyFile(String src, String dst);
			
			/// @brief Truncates a file.
			static Int TruncateFile(String path, Int offset);
			
			static Int MakeDirectory(String path, Bool unk);
			static Int MakeDirectoryForFile(String pathToFile);
			static Int RemoveDirectory(String path, Bool unk);
			static Blob Deflate(Blob blob);
			
			static Blob DeflateEncryptAsync(String path, Bool unk) ;
			
			static Blob Inflate(Blob blob);
			
			static Blob DectyptInflateAsync(String path, Bool unk);
			
			static Long GetDiskFreeSize(String path);
			
			/// @brief Returns the amount of files being installed
			static Int GetOnDemandInstallingFiles();
			
			static String EncodeBase64(Object obj);
			
			static String DecodeBase64(Object obj);
			
			/* ? */
			static Int CheckRights();
			
			static Int CRC32(Blob data);
			
			/// @brief Returns whether the game is a debug version.
			static Int IsDebugVersion();
			
			/// @brief Stripped as release.
			static void BusyWait();
			
			/* PFGMemSetPrefix PFGMemGetRedist PFGMemSetRedist PFGMemGetExpand PFGMemSetExpand */
			static Array GetTsmOptionInt32();
			
			static void SetTsmOptionInt32(hString param, hLong value);
			
			/// @brief Stripped as release.
			static void assert(string message);
			
			/// @brief Initiates a crash.
			static void crash(string message = nil);
			
			/// @brief Exits the game.
			static void exit(hInt exitCode);
			
			/// @brief Gets the system time in microseconds.
			static Long GetSystemTimeMicroSecond();
			
			/// @brief Gets the system time in milliseconds.
			static Long GetSystemTimeMilliseconds();
			
			static Int GetHeapTotalSize();
			static UInt GetHeapFreeSize();
			static UInt GetHeapAllocateMax();
			static Long GetHeapMeter()
			
			/// @brief Stripped as release.
			static void DumpMemoryBlock();
			
			/// @brief Refer to pdistd::Language.
			static void SetLanguage(Int language);
			
			/// @brief Rescans devices.
			static void DeviceRescan();
			
			/// @brief Hashes a string.
			static ULong AsciiStringHash(String str);
			
			/// @brief Gets the current PS3 Profile Name.
			static String SysParamCurrentUserName();
			
			/// @brief Gets the current PS3 Parental Level.
			static Int SysParamParentalLevel();
			
			/// @brief Returns the count of game boot attributes.
			static Int GetGameBootAttribute();
			
			/// @brief Unk (3 args) (self.base_rank_list, racers_list, racer_count)
			static ? TraceRankList();
		
			/// @brief MD5 Checksum
			static String MD5(hString arg);
			
			static Unknown Salsa20Encrypt();
			static Unknown Salsa20Decrypt();
			
			/// @brief Returns ram left in bytes
			static Int GetAvailableUserMemorySize();
			
			/// @brief Gets the total of memory usable in bytes
			static Int GetTotalUserMemorySize();
			
			/// @brief Gets the current PS3 Profile Name.
			static String getPlayerName();
			
			static Unknown atan2();
			
			static Unknown inverseMatrix();
			
			static Unknown multiplyMatrix();
			
			static Unknown GetTsmOptionSize();
			
			static Unknown SetTsmOptionSize();
			
			/// @brief Converts text. Warning: not providing the arg crashes the game.
			static String TextConv(String str);
	}
};
