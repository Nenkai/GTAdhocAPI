namespace System
{
	/** \brief Built-in type that represents an unsigned 16-bit number. */
	class UShort : public Object
	{
		public:
		
			/// @brief constructor taking no param
			UShort() { };
			
			/** \brief Constructs a new UShort from the specified value. */
			UShort(UShort value) { };

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