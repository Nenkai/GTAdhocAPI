namespace System
{
	/** \brief Built-in boolean object which represents true or false. */
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