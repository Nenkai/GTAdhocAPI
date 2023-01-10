namespace pdistd
{
    enum class NetworkSystemType
	{
		NONE = 0x0, /*!< 0x0 */
		STIME = 0x100, /*!< 0x100 */
		NP = 0x1000, /*!< 0x1000 */
		SOCKET = 0x10000, /*!< 0x10000 */
		GRIM = 0x100000, /*!< 0x100000 */
		AUTOMATIC = 0x10000000, /*!< 0x10000000 */
	};
}