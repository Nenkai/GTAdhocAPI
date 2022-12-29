namespace System
{
	/** \brief Built-in exception object */
	class Exception : public Object
	{
		public:
		
			/// @brief constructor taking no param
			Exception() { };
			
			/// @brief Creates an exception object from the specified message
			Exception(String message) { };

			/** \brief Exception Message */
			String message;
	}
}