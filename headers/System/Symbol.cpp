namespace System
{
	/** \brief Built-in type that represents an unique symbol. */
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