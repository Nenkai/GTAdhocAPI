namespace System
{
	/** \brief Built-in type that represents a signed 64-bit number. */
	class Long : public Object, IByteData
	{
		public:
		
			/// @brief constructor taking no param
			Long() { };

			/** \brief Constructs a new Long from the specified value. */
			Long(Long value) { };

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