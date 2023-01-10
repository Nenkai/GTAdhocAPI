namespace pdistd
{
    enum class NpMessageInfoType
	{
		Attachment = 0, /*!< 0 */
		MatchingInvitation = 1, /*!< 1 */
		ClanMessage = 2, /*!< 2 */
		CustomDataMessage = 3, /*!< 3 */
		AnyUnreadMessage = 4, /*!< 4 */
		BootableInvitation = 5, /*!< 5 */
		BootableCustomDataMessage = 6, /*!< 6 */
	};
}