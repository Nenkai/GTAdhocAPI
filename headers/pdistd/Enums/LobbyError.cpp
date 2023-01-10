namespace pdistd
{
    enum class LobbyError
	{
		RoomMemberNotFound = -451, /*!< -451 */
		NATTypeMismatch = -412, /*!< -412 */
		AlreadyJoined = -411, /*!< -411 */
		YouAreBlocked = -405, /*!< -405 */
		RoomIsClosed = -404, /*!< -404 */
		GroupIsFull = -403, /*!< -403 */
		RoomIsFull = -402, /*!< -402 */
		RoomNotFound = -401, /*!< -401 */
		LobbyMemberNotFound = -351, /*!< -351 */
		LobbyIsFull = -302, /*!< -302 */
		LobbyNotFound = -301, /*!< -301 */
		YouAreBanned = -241, /*!< -241 */
		WrongPassword = -231, /*!< -231 */
		NoSuchGroup = -225, /*!< -225 */
		NoSuchUser = -224, /*!< -224 */
		NoSuchRoom = -223, /*!< -223 */
		NoSuchLobby = -222, /*!< -222 */
		NoSuchWorld = -211, /*!< -211 */
		ServerIsClosed = -206, /*!< -206 */
		ServerIsBusy = -205, /*!< -205 */
		ServerNotFound = -204, /*!< -204 */
		ServerNotAvailable = -203, /*!< -203 */
		ServerCommunication = -202, /*!< -202 */
		ConnectionClosedByServer = -201, /*!< -201 */
		GenericServer = -200, /*!< -200 */
		ContextIsSpoilt = -120, /*!< -120 */
		NATTraverseFailed = -119, /*!< -119 */
		NPOffline = -112, /*!< -112 */
		NPSignedOut = -111, /*!< -111 */
		RequestQueued = -109, /*!< -109 */
		RequestNotAllowed = -108, /*!< -108 */
		RequestAborted = -107, /*!< -107 */
		RequestTimeout = -105, /*!< -105 */
		SystemQueueOverflow = -102, /*!< -102 */
		OutOfMemory = -101, /*!< -101 */
		Generic = -1, /*!< -1 */
		None = 0, /*!< 0 */
	};
}