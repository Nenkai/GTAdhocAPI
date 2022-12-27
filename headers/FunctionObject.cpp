namespace System
{
	class FunctionObject : public Object, IFunction, IGenerator
	{
		public:
		
			/// @brief constructor taking no param
			FunctionObject() { };
			
			operator==(){};
			operator!=(){};
	}
}