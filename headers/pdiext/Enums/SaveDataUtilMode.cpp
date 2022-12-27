namespace pdiext
{
    enum class SaveDataUtilMode : uint
	{
		SAVEDATAUTIL_AUTO = 0, /*!< 0 */
		SAVEDATAUTIL_LIST = 1, /*!< 1 */
		SAVEDATAUTIL_FIXED = 2, /*!< 2 */
		SAVEDATAUTIL_BG = 3, /*!< 3 */ 
		SAVEDATAUTIL_BACKUP = 4, /*!< 4 */
		SAVEDATAUTIL_OVERWRITE = 5, /*!< 5 */
		SAVEDATAUTIL_AUTO_CREATE = 6, /*!< 6 */ 
		SAVEDATAUTIL_MIGRATION = 7, /*!< 7 */
		SAVEDATAUTIL_RECREATE = 8, /*!< 8 */ 
	};
}