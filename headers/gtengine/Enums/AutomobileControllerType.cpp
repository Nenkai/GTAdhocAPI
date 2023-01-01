namespace gtengine
{
    enum class AutomobileControllerType
	{
        UNKNOWN = 0, /*!< 0 */
        AI = 1, /*!< 1 */
        PAD_BUTTON = 2, /*!< 2 */
        PAD_STICK = 3, /*!< 3 */
        WHEEL200 = 4, /*!< 4 */
        WHEEL900S = 5, /*!< 5 */
        WHEEL900G = 6, /*!< 6 */
        WHEEL900GC = 7, /*!< 7 */
        
        WHEEL_MIN = 4, /*!< 4 */
        WHEEL_MAX = 7, /*!< 7 */

        PAD_MIN = 2, /*!< 2 */
        PAD_MAX = 3, /*!< 3 */
    }
}