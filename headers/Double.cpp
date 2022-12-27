namespace System
{
	/* Built-in double object */
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