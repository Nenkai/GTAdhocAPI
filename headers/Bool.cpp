namespace System
{
	class Bool : public Object
	{
		public:
		
			/// @brief constructor taking no param
			Bool() { };
			
			Object value;
			
			operator&&() {};
			operator||() {};
			operator^() {};
			operator==() {};
			operator!=() {};
			operator&&() {};
			operator~() {};
	}
}