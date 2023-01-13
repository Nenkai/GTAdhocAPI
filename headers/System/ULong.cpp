namespace System
{
	/** \brief Built-in type that represents an unsigned 64-bit number. */
	class ULong : public Object
	{
		public:
		
			/// @brief constructor taking no param
			ULong() { };

			/** \brief Constructs a new ULong from the specified value. */
			ULong(ULong value) { };

			Object value;
			
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