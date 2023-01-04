namespace gtengine
{
    enum class CameraDrawFlag
	{
        DRAW_TARGET = 0x1, /*!< 0x1 */
        DRAW_METER = 0x2, /*!< 0x2 */
        DRAW_DRIVER_METER = 0x4, /*!< 0x4 */
        DRAW_DRIVER = 0x8, /*!< 0x8 */
        DRAW_BACKMIRROR = 0x10, /*!< 0x10 */
        DRAW_IN_CAR = 0x20, /*!< 0x20 */
        DRAW_DRIVER_ALL = 0x40, /*!< 0x40 */
        USE_SPECIAL_VISION_LIST = 0x80, /*!< 0x80 */
        DRAW_MINIMAP = 0x100, /*!< 0x100 */
        DRAW_GT_MINILOGO = 0x200, /*!< 0x200 */
        DRAW_BACK_VIEW = 0x400, /*!< 0x400 */
        PAUSE_MOVE = 0x800, /*!< 0x800 */
        DRAW_FOOTER = 0x1000, /*!< 0x1000 */
	};
}