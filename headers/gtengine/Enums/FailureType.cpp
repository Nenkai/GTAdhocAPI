namespace gtengine
{
    enum class FailureType
	{
        NONE = 0, /*!< 0 */
        COURSE_OUT = 1, /*!< 1 */
        HIT_WALL_HARD = 2, /*!< 2 */
        HIT_CAR_HARD = 3, /*!< 3 */
        HIT_CAR = 4, /*!< 4 */
        PYLON = 5, /*!< 5 */
        HIT_WALL = 6, /*!< 6 */
        SPIN_FULL = 7, /*!< 7 */
        SPIN_HALF = 8, /*!< 8 */
        WHEEL_SPIN = 9, /*!< 9 */
        LOCK_BRAKE = 10, /*!< 10 */
        SLIP_ANGLE = 11, /*!< 11 */
        LESS_SPEED = 12, /*!< 12 */
        MORE_SPEED = 13, /*!< 13 */
        MORE_GFORCE = 14, /*!< 14 */
        PENALTY_ROAD = 15, /*!< 15 */
        LOW_MU_ROAD = 16, /*!< 16 */
        SLALOM = 17, /*!< 17 */
        WRONGWAY = 18, /*!< 18 */
        WRONGWAY_LOOSE = 19, /*!< 19 */
        MAX = 20, /*!< 20 */
    }
}