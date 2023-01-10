namespace pdistd
{
    enum class NPBasicEventType
	{
		OFFLINE = 0, /*!< 0 */
		PRESENCE = 1, /*!< 1 */
		MESSAGE = 2, /*!< 2 */
		INCOMING_ATTACHMENT = 4, /*!< 4 */
		INCOMING_INVITATION = 5, /*!< 5 */
		RECV_ATTACHMENT_RESULT = 8, /*!< 8 */
		CONTEXT = 9, /*!< 9 */
		REMOVED = 10, /*!< 10 */
		RECV_INVITATION_RESULT = 14, /*!< 14 */
		INCOMING_CUSTOM_INVITATION = 16, /*!< 16 */
		INCOMING_CLAN_MESSAGE = 17, /*!< 17 */
		RECV_CUSTOM_DATA_RESULT = 20, /*!< 20 */
		INCOMING_CUSTOM_DATA_MESSAGE = 21, /*!< 21 */
	};
}