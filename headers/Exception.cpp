namespace System
{
	class Exception : public Object
	{
		public:
		
			/// @brief constructor taking no param
			Exception() { };
			
			String message;
	}
}