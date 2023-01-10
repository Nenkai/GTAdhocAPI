namespace pdistd
{
    enum class FileError
	{
		OK = 0, /*!< 0 */
		CANCEL = 1, /*!< 1 */
		NOTSUPPORT = 2, /*!< 2 */
		NOMEMORY = 3, /*!< 3 */
		NODEVICE = 4, /*!< 4 */
		IO = 5, /*!< 5 */
		DEVICEFULL = 6, /*!< 6 */
		READONLY = 7, /*!< 7 */
		NOTPERMITTED = 8, /*!< 8 */
		NOTFOUND = 9, /*!< 9 */
		ILLEGAL = 10, /*!< 10 */
		EXISTS = 11, /*!< 11 */
		NOTDIRECTORY = 12, /*!< 12 */
		ISDIRECTORY = 13, /*!< 13 */
		NOTEMPTY = 14, /*!< 14 */
		SEEK = 15, /*!< 15 */
		DRM_SERVER = 16, /*!< 16 */
		DRM_PERMISSION = 17, /*!< 17 */
		DRM_NOTSTARTED = 18, /*!< 18 */
		DRM_EXPIRED = 19, /*!< 19 */
		DRM_BADAUTH = 20, /*!< 20 */
		EXCEPTION = 21, /*!< 21 */
		UNKNOWN = 22, /*!< 22 */
	};
}