namespace System
{
	/** \brief Built-in type which represents a value between 0 and 255 (1 byte). */
	class Byte : public Object, IByteData
	{
		public:
		
			/// @brief constructor taking no param
			Byte() { };
			
			/** \brief Constructs a new Byte from the specified value. */
			Byte(Byte value) { };

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