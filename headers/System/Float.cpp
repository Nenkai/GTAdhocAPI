namespace System
{
	/** \brief Built-in type that represents a single-precision 32-bit number. */
	class Float : public Object, IByteData
	{
		public:
		
			/// @brief constructor taking no param
			Float() { };
			
			Float value;
			
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