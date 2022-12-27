namespace System
{
	/* Built-in floating point object */
	class Float : public Object, IByteData
	{
		public:
		
			/// @brief constructor taking no param
			Float() { };
			
			Object value;
			
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