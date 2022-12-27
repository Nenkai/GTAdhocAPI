namespace System
{
	class Class : public Module, IMap
	{
		public:
		
			/// @brief Creates a new class from the specified path name.
			Class(String name) { };
			
			operator==(){};
			operator!=(){};

			operator_new(){};
			Object operator_call(){};
	}
}