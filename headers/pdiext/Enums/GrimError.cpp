namespace pdiext
{
    enum class GrimError : int
	{
		GRIM_ERROR_OK = 0, /*!< 0 */
        GRIM_ERROR_INIT = 1, /*!< 1 */
        GRIM_ERROR_MAINTENANCE = 2, /*!< 2 */
        GRIM_ERROR_FAILED_RESULT = 3, /*!< 3 */
        GRIM_ERROR_XML = 4, /*!< 4 */
        GRIM_ERROR_FILE = 5, /*!< 5 */
        GRIM_ERROR_GRIM_HTTP = 6, /*!< 6 */
        GRIM_ERROR_CATEGORY_ROOT = 7, /*!< 7 */
        GRIM_ERROR_CATEGORY_NOT_FOUND = 8, /*!< 8 */
        GRIM_ERROR_NO_FINISH = 9, /*!< 9 */
        GRIM_ERROR_DENY = 10, /*!< 10 */
        GRIM_ERROR_UNKNOWN = 99, /*!< 99 */
        GRIM_ERROR_RUNNING = -1, /*!< -1 */
	};
}