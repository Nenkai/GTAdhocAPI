namespace gtengine
{
    enum class ConsiderationResult
	{
        NONE = 0, /*!< 0 */
        RESET = 1, /*!< 1 */
        PITTHROUGH = 2, /*!< 2 */
        LAPTIME_INVALID = 3, /*!< 3 */
        ADDITIONAL_TIME = 4, /*!< 4 */
        BACK_ADVANTAGE = 5, /*!< 5 */
        SPEED_LIMIT = 6, /*!< 6 */
        WARNING = 7, /*!< 7 */
    };
}