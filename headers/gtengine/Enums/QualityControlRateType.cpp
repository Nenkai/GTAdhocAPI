namespace gtengine
{
    enum class QualityControlRateType
	{
        LowerLimit = 0, /*!< 0 */
        UpperLimit = 1, /*!< 1 */
        UpperLimitTotal = 2, /*!< 2 */
        LowerLimitWhileRecording = 3, /*!< 3 */
        OutOfCourse = 4, /*!< 4 */
        CameraTargetedVehicle = 5, /*!< 5 */
        CameraTargetedVehiclePitStop = 6, /*!< 6 */
        ExceptCameraTargetedVehicle = 7, /*!< 7 */
        PitStopVehicleWhileDriving = 8, /*!< 8 */
        FarawayVehicleWhileDriving = 9, /*!< 9 */
    };
}