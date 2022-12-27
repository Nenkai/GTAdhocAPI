namespace System
{
	/* Built-in long object type */
	class Long : public Object, IByteData
	{
		public:
		
			/// @brief constructor taking no param
			Long() { };
					
			Long value;
			
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