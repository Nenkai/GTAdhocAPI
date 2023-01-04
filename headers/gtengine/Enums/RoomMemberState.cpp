namespace gtengine
{
    enum class RoomMemberState
	{
        None = 0, /*!< 0 */
        MemberList = 0x100000, /*!< 0x100000 */
        RaceStart = 0x200000, /*!< 0x200000 */
        EventConfig = 0x400000, /*!< 0x400000 */
        Chat = 0x800000, /*!< 0x800000 */
        Result = 0x1000000, /*!< 0x1000000 */
        Garage = 0x2000000, /*!< 0x2000000 */
        VoteOnSkip = 0x4000000, /*!< 0x4000000 */
        Running = 0x8000000, /*!< 0x8000000 */
        RaceView = 0x10000000, /*!< 0x10000000 */
        DrivingOption = 0x20000000, /*!< 0x20000000 */
        Setting = 0x40000000, /*!< 0x40000000 */
        Pause = 0x80000000, /*!< 0x80000000 */
    }
}