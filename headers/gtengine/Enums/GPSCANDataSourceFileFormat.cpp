namespace gtengine
{
    enum class GPSCANDataSourceFileFormat
	{
		NONE = 0, /*!< 0 */
		TOYOTA_ASC = 1, /*!< 1 */
		TOYOTA_CAN_LIT = 2, /*!< 2 */
		TOYOTA_CAN_BIG = 3, /*!< 3 */
		TOYOTA_CAN_BIG_RECKON = 4, /*!< 4 */
		TOYOTA_CAN_BIG_RECKON_SP_INTEG = 5, /*!< 5 */
		TOYOTA_CAN_BIG_SP_INTEG = 6, /*!< 6 */
		TOYOTA_CAN_BIG_HEAD = 7, /*!< 7 */
		TOYOTA_CAN_BIG_RECKON_HEAD = 8, /*!< 8 */
		TOYOTA_CAN_BIG_RECKON_SP_INTEG_HEAD = 9, /*!< 9 */
		TOYOTA_CAN_BIG_SP_INTEG_HEAD = 10, /*!< 10 */
		SLS_AMG = 11, /*!< 11 */
		SUBARU_CAN = 12, /*!< 12 */
	};
}