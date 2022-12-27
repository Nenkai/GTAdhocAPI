namespace System
{
	/* Built-in byte object */
	class Byte : public Object, IByteData
	{
		public:
		
			/// @brief constructor taking no param
			Byte() { };
			
			Byte value;
			
			operator-() {};
			operator+() {};
			operator--@() {};
			operator++@() {};
			operator@--() {};
			operator@++() {};
			operator&&() {};
			operator||() {};
			operator^() {};
			operator/() {};
			operator*() {};
			operator%() {};
			operator**() {};
			operator==() {};
			operator!=() {};
			operator&&() {};
			operator>() {};
			operator<() {};
			operator>=() {};
			operator<=() {};
			operator!() {};
			operator~() {};
			operator>>() {};
			operator<<() {};
			operator|() {};
	}
}