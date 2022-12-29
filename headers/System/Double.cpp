namespace System
{
	/** \brief Built-in type that represents a double-precision 64-bit number. */
	class Double : public Object, IByteData
	{
		public:
		
			/// @brief constructor taking no param
			Double() { };
			
			Double value;
			
			operator-() {};
			operator+() {};
			operator--@() {};
			operator++@() {};
			operator@--() {};
			operator@++() {};
			operator&&() {};
			operator||() {};
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
	}
}