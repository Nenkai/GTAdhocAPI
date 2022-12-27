namespace System
{
	/* Built-in boolean object */
	class Bool : public Object, IByteData
	{
		public:
		
			/// @brief constructor taking no param
			Bool() { };
			
			/* Value */
			Bool value;
			
			operator&&() {};
			operator||() {};
			operator^() {};
			operator==() {};
			operator!=() {};
			operator&&() {};
			operator~() {};
	}
}