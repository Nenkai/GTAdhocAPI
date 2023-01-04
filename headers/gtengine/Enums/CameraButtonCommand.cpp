namespace gtengine
{
    enum class CameraButtonCommand
	{
        DRIVER_VIEW_CHANGE = 0x1, /*!< 0x1 */
        VIEW_MODE_CHANGE = 0x20, /*!< 0x20 */
        METER_DRAW_CHANGE = 0x80, /*!< 0x80 */
        FORWARD_TARGET = 0x100, /*!< 0x100 */
        BACKWARD_TARGET = 0x200, /*!< 0x200 */
	};
}