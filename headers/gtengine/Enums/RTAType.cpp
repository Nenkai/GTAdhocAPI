namespace gtengine
{
    enum class RTAType
	{
		TCS = 0x01, /*!< 1 */
        AWD = 0x02, /*!< 2 */
        ASM = 0x04, /*!< 4 */
        ABS = 0x08, /*!< 8 */
        BRK_FR = 0x10, /*!< 16 */
        ALL = TCS | AWD | ASM | ABS | BRK_FR, /*!< TCS | AWD | ASM | ABS | BRK_FR */
	};
}