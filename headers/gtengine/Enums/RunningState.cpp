namespace gtengine
{
    enum class RunningState
	{
        IS_RUNNING = 0, /*!< 0 */
        ON_GRID = 1, /*!< 1 */
        IN_FORMATION_LAP = 2, /*!< 2 */
        IN_PITAREA = 3, /*!< 3 */
        IS_PITSTOP = 4, /*!< 4 */
        NOW_PITWORK = 5, /*!< 5 */
        DO_NOT_FINISH = 6, /*!< 6 */
        OUT_LAP = 7, /*!< 7 */
        WINNING_RUN = 8, /*!< 8 */
        IN_GARAGE = 9, /*!< 9 */
        EntryRunningStateSizeDefine = 2147483647, /*!< 2147483647 */
    };
}