namespace gtengine
{
    enum class RoomState
	{
        Creating = 0, /*!< 0 */
        Idle = 1, /*!< 1 */
        VoteCourseCountDown = 2, /*!< 2 */
        WaitingParticipantCountDown = 3, /*!< 3 */
        PrepareRaceCountDown = 4, /*!< 4 */
        PrepareChangeCourse = 5, /*!< 5 */
        ShowingWinner = 6, /*!< 6 */
    }
}