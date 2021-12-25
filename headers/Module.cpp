namespace System
{
	class Module : public Object
	{
		public:
		
			/// @brief constructor taking no param
			Module() { };
			
			/// @brief Returns the module name.
			String name;
			void load(Bool unk);
			void defineModule(Module module);
			void defineClass(Class class);
			void defineStatic(Object obj, String staticName = "");
			void defineAttribute(Object obj, String attrName = "");
			void import(Object unk, Object unk2);
			
			/// @brief Removes a specific static member from the module.
			void removeStatic(Object obj);
			
			/// @brief Clears all static members from the module.
			void clearStatic();
			
			void each_attribute();
			void map_attribute(FunctionObject func);
			
			/// @brief Finds all static members that matches the precondition.
			Array find_all(FunctionObject func);
			
			/// @brief Finds a static member that matches the precondition.
			Object find_static(FunctionObject precondition);
			
			/// @brief Gets the module's path name.
			String getModulePath();
			Object getModuleAttribute(String path);
			void setModuleAttribute(String path, Object value);
			Object getScopeAttribute(String path);
			void setScopeAttribute(String path, Object value);
	}
}