namespace pdistd
{
    enum class EventCause
	{
		Unknown = 0, /*!< 0 */
		LeaveNormally = 1, /*!< 1 */
		GrantNormally = 2, /*!< 2 */
		ConnectionError = 3, /*!< 3 */
		SystemError = 4, /*!< 4 */
		MemberDisappeared = 5, /*!< 5 */
		KickedOut = 6, /*!< 6 */
		ServerReason = 7, /*!< 7 */
		QualifiedOwnerNotFound = 8, /*!< 8 */
	};
}