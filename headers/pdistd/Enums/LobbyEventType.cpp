namespace pdistd
{
    enum class LobbyEventType
	{
		None = 0, /*!< 0 */
		Joined = 1, /*!< 1 */
		Left = 2, /*!< 2 */
		MemberJoined = 3, /*!< 3 */
		MemberJoinedCompletely = 4, /*!< 4 */
		MemberLeft = 5, /*!< 5 */
		MemberDataUpdated = 6, /*!< 6 */
		DataUpdated = 7, /*!< 7 */
		ExternalDataUpdated = 8, /*!< 8 */
		KickedOut = 9, /*!< 9 */
		Destroyed = 10, /*!< 10 */
		OwnerChanged = 11, /*!< 11 */
		SearchResult = 12, /*!< 12 */
		GetExternalRoomInfoResult = 13, /*!< 13 */
		GetRTTResult = 14, /*!< 14 */
		MustRestart = 15, /*!< 15 */
		RequestFailed = 16, /*!< 16 */
		GetExternalRoomMemberListResult = 17, /*!< 17 */
		ChatFiltered = 18, /*!< 18 */
	};
}