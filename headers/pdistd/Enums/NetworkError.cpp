namespace pdistd
{
    enum class NetworkError
	{
		ServerIsClosed = -80, /*!< -80 */
		RunningMonitorDetected = -70, /*!< -70 */
		RaceLocalEntryCountIsNotEnough = -57, /*!< -57 */
		RaceNetworkJoinTimeout = -56, /*!< -56 */
		RaceNetworkJoinRequestFailed = -55, /*!< -55 */
		RaceNetworkReadyToJoinTimeout = -54, /*!< -54 */
		RaceNetworkReadyToJoinFailed = -53, /*!< -53 */
		RaceNetworkConnectTimeout = -52, /*!< -52 */
		RaceNetworkReadyToConnectTimeout = -51, /*!< -51 */
		RaceNetworkReadyToConnectFailed = -50, /*!< -50 */
		MigrationCandidateNotFound = -41, /*!< -41 */
		HostInconsistencyFound = -40, /*!< -40 */
		FailedToInitializeMatching2 = -31, /*!< -31 */
		FailedToCreateMatching2Context = -30, /*!< -30 */
		InvalidUserNumber = -13, /*!< -13 */
		CommunicatorIsNotInitializedYet = -12, /*!< -12 */
		NetworkIsNotOnline = -11, /*!< -11 */
		GrimIsNotOnline = -10, /*!< -10 */
		AbnormalDisconnect = -6, /*!< -6 */
		NotFullyConnected = -5, /*!< -5 */
		KeepAliveBroken = -4, /*!< -4 */
		HostIsBusy = -3, /*!< -3 */
		ApplicationVersionIsDifferent = -2, /*!< -2 */
		Generic = -1, /*!< -1 */
		None = 0, /*!< 0 */
	};
}