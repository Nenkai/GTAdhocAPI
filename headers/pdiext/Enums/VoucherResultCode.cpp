namespace pdiext
{
    enum class VoucherResultCode : int
	{
		ResultCodeOK = 0, /*!< 0 */
        ResultCodeInvalidArgument = 0x80001000, /*!< 80001000 */
        ResultCodeNoMemory = 0x80001001, /*!< 80001001 */
        ResultCodeNoIndex = 0x80001002, /*!< 80001002 */
        ResultCodeBufferNoSpace = 0x80001003, /*!< 80001003 */
        ResultCodeInvalidKeyLicensee = 0x80001004, /*!< 80001004 */
        ResultCodeInvalidIndex = 0x80001005, /*!< 80001005 */
        ResultCodeNoEntry = 0x80001014, /*!< 80001014 */
        ResultCodeIllegal = 0x80001015, /*!< 80001015 */
        ResultCodeNoDevice = 0x80001016, /*!< 80001016 */
        ResultCodeNoSupport = 0x80001017, /*!< 80001017 */
        ResultCodeDRMGeneric = 0x80001028, /*!< 80001028 */
        ResultCodeDRMBadRights = 0x80001029, /*!< 80001029 */
        ResultCodeDRMNoEntitlement = 0x8000102a, /*!< 8000102a */
        ResultCodeDRMBadDeviceAuth = 0x8000102b, /*!< 8000102b */
        ResultCodeDRMIllegalFile = 0x8000102c, /*!< 8000102c */
        ResultCodeDRMTimeLimit = 0x8000102d, /*!< 8000102d */
        ResultCodeDRMServiceNotStarted = 0x8000102e, /*!< 8000102e */
        ResultCodeDRMClockNotInitialized = 0x8000102f, /*!< 8000102f */
        ResultCodeUnknown = 0x80001063, /*!< 80001063 */
	};
}