namespace gtengine
{
    enum class PitMessageType
	{
        NONE = 0, /*!< 0 */
        PACE_DOWN = 1, /*!< 1 */
        PACE_KEEP = 2, /*!< 2 */
        PACE_UP = 3, /*!< 3 */
        OVERTAKE = 4, /*!< 4 */
        PITIN = 5, /*!< 5 */
        PITIN_CANCEL = 6, /*!< 6 */
        PACE_LOW = 7, /*!< 7 */
        PACE_MEDIUM_LOW = 8, /*!< 8 */
        PACE_MEDIUM = 9, /*!< 9 */
        PACE_MEDIUM_HIGH = 10, /*!< 10 */
        PACE_HIGH = 11, /*!< 11 */
        DIRECT_SUSPEND = 12, /*!< 12 */
        DIRECT_RESUME = 13, /*!< 13 */
        RUN_LEFT = 14, /*!< 14 */
        RUN_RIGHT = 15, /*!< 15 */
        OVERTAKING = 16, /*!< 16 */
        SLIPSTREAM = 17, /*!< 17 */
        BRAKING = 18, /*!< 18 */
        ACCELERATING = 19, /*!< 19 */
    }
}