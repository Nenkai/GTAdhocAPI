namespace pdistd
{
    enum class BinaryMessageType
	{
		Unknown = 0, /*!< 0 */
		GameStats = 1, /*!< 1 */
		UserInfo = 2, /*!< 2 */
		GameStatsRequest = 3, /*!< 3 */
		ApplicationSpecific = 4, /*!< 4 */
		RequestToken = 5, /*!< 5 */
		ReleaseToken = 6, /*!< 6 */
		RequestTokenResult = 7, /*!< 7 */
		LatestUpdateDate = 8, /*!< 8 */
		LatestUpdateDateRequest = 9, /*!< 9 */
		LeaveRoomRequest = 10, /*!< 10 */
		SignalData = 11, /*!< 11 */
		AutoMessage = 12, /*!< 12 */
		SystemMessage = 13, /*!< 13 */
		EncapsulatedChatMessage = 14, /*!< 14 */
	};
}