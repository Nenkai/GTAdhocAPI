namespace gtengine
{
    enum class QualityControlTemplateType
	{
        Default = 0, /*!< 0 */
        Recommend = 1, /*!< 1 */

		VeryLowBandwidth8 = 11, /*!< 11 */
        LowBandwidth8 = 12, /*!< 12 */
        ModerateBandwidth8 = 13, /*!< 13 */
        HighBandwidth8 = 14, /*!< 14 */
        VeryHighBandwidth8 = 15, /*!< 15 */
        VeryLowBandwidth12 = 21, /*!< 21 */
        LowBandwidth12 = 22, /*!< 22 */
        ModerateBandwidth12 = 23, /*!< 23 */
        HighBandwidth12 = 24, /*!< 24 */
        VeryHighBandwidth12 = 25, /*!< 25 */
        VeryLowBandwidth16 = 31, /*!< 31 */
        LowBandwidth16 = 32, /*!< 32 */
        ModerateBandwidth16 = 33, /*!< 33 */
        HighBandwidth16 = 34, /*!< 34 */
        VeryHighBandwidth16 = 35, /*!< 35 */
        LanModerate = 37, /*!< 37 */
        LanMax = 38, /*!< 38 */
        
        Max8 = 10, /*!< 10 */
        Max12 = 20, /*!< 20 */
        Max16 = 30, /*!< 30 */
    };
}