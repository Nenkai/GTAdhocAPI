namespace gtengine
{
    enum class NoticeType
	{
		Unknown = 0, /*!< 0 */
        AutoMessage = 3, /*!< 3 */
        RoomChat = 1, /*!< 1 */
        RoomChatMySpeak = 2, /*!< 2 */
        LobbyChat = 4, /*!< 4 */
        GenericSystemMessage = 5, /*!< 5 */
        RoomJoinDone = 6, /*!< 6 */
        RoomMemberJoin = 7, /*!< 7 */
        RoomMemberLeft = 8, /*!< 8 */
        RoomOwnerChanged = 9, /*!< 9 */
        CourseVoteBegin = 10, /*!< 10 */
        SomeoneVotedCourse = 11, /*!< 11 */
        CurrentCourseChanged = 12, /*!< 12 */
        CourseConfigChanged = 13, /*!< 13 */
        RoomConfigChanged = 14, /*!< 14 */
        RaceConfigChanged = 15, /*!< 15 */
        RoomConfigChangeFailed = 16, /*!< 16 */
        RaceConfigChangeFailed = 17, /*!< 17 */
        PrepareRace = 18, /*!< 18 */
        RaceFinalLap = 19, /*!< 19 */
        RaceFastestLap = 20, /*!< 20 */
        RaceOvertake = 21, /*!< 21 */
        ReplayRecordEnd = 22, /*!< 22 */
        NextLapInvalid = 23, /*!< 23 */
        TemporaryRanking = 24, /*!< 24 */
        ForceEntryCanceled = 25, /*!< 25 */
        ReopenDrivingOption = 26, /*!< 26 */
        CourseNotChanged = 27, /*!< 27 */
        RaceNotStartedNobodyOnTrack = 28, /*!< 28 */
        AfterPenalty = 29, /*!< 29 */
        PitConstraint = 30, /*!< 30 */
        NeedTireChange = 31, /*!< 31 */
        BestRecordUpdated = 32, /*!< 32 */
	};
}