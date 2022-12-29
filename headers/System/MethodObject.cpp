namespace System
{
	/** \brief Built-in type that represents a method. */
	class MethodObject : public Object, IGenerator, IFunction
	{
		public:
		
			/// @brief constructor taking no param
			MethodObject() { };
			
			Object self;
			operator==(){};
			operator!=(){};
	}
}