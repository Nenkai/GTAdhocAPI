namespace System
{
	/** \brief Built-in type that represents a signed 32-bit number. */
	class Int : public Object, IByteData
	{
		public:
		
			/// @brief constructor taking no param
			Int() { };
			
			/** \brief Constructs a new Int from the specified value. */
			Int(Int value) { };

			Int value;
			
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