namespace System
{
	/** \brief Built-in type that represents a signed 16-bit number. */
	class Short : public Object, IByteData
	{
		public:
		
			/** \brief constructor taking no param */
			Short() { };

			/** \brief Constructs a new Short from the specified value. */
			Short(Short value) { };

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