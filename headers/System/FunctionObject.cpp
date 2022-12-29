namespace System
{
	/** \brief Built-in type that represents a function. */
	class FunctionObject : public Object, IFunction, IGenerator
	{
		public:
		
			/// @brief constructor taking no param
			FunctionObject() { };
			
			operator==(){};
			operator!=(){};
	}
}