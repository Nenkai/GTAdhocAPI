namespace pdiext
{
    enum class GameContentUtilStorageError : int
	{
		USBSTORAGE_OK = 0, /*!< 0 */
        USBSTORAGE_CANCEL = 1, /*!< 1 */
        USBSTORAGE_USBERROR = 2, /*!< 2 */
        USBSTORAGE_NOTSUPPORT = 3, /*!< 3 */
        USBSTORAGE_NOMEMORY = 4, /*!< 4 ENOMEM */
        USBSTORAGE_NODEVICE = 5, /*!< 5 ENOTDIR */
        USBSTORAGE_IO = 6, /*!< 6 EBUSY */
        USBSTORAGE_DEVICEFULL = 7, /*!< 7 */
        USBSTORAGE_READONLY = 8, /*!< 8 */
        USBSTORAGE_NOTPERMITTED = 9, /*!< 9 */
        USBSTORAGE_NOTFOUND = 10, /*!< 10 - EFAULT / EPERM / EFSSPECIFIC */
        USBSTORAGE_ILLEGAL = 11, /*!< 11 */
        USBSTORAGE_EXISTS = 12, /*!< 12 EEXIST */
        USBSTORAGE_NOTDIRECTORY = 13, /*!< 13 */
        USBSTORAGE_ISDIRECTORY = 14, /*!< 14 EISDIR */
        USBSTORAGE_NOTEMPTY = 15, /*!< 15 */
        USBSTORAGE_SEEK = 16, /*!< 16 */
        USBSTORAGE_EXCEPTION = 17, /*!< 17 */
        USBSTORAGE_UNKNOWN = 18, /*!< 18 */
	};
}