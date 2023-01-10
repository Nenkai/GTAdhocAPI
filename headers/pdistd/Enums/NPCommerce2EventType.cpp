namespace pdistd
{
    enum class NPCommerce2EventType
	{
		REQUEST_ERROR = 1, /*!< 1 */
		CREATE_SESSION_DONE = 17, /*!< 17 */
		CREATE_SESSION_ABORT = 18, /*!< 18 */
		DO_CHECKOUT_STARTED = 33, /*!< 33 */
		DO_CHECKOUT_SUCCESS = 34, /*!< 34 */
		DO_CHECKOUT_BACK = 35, /*!< 35 */
		DO_CHECKOUT_FINISHED = 36, /*!< 36 */
		DO_PRODUCT_CODE_STARTED = 81, /*!< 81 */
		DO_PRODUCT_CODE_SUCCESS = 82, /*!< 82 */
		DO_PRODUCT_CODE_BACK = 83, /*!< 83 */
		DO_PRODUCT_CODE_FINISHED = 84, /*!< 84 */
	};
}