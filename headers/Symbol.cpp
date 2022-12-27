namespace System
{
	class Symbol : public Object
	{
		public:
		
			/// @brief constructor taking no param
			Symbol() { };
						
			Symbol value;
			
			operator==() {};
			operator!=() {};
			operator>() {};
			operator>=() {};
			operator<() {};
			operator<=() {};
	}
}