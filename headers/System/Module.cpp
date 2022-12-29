namespace System
{
	/** \brief Built-in type that represents a module (or namespace in C++). */
	class Module : public Object, IMap
	{
		public:
		
			/// @brief constructor taking no param
			Module() { };
			
			/** \brief Creates a new module with the specified name. */
			Module() { };

			/// @brief Returns the module name.
			String name;

			/** \brief Loads all modules from the specified script. 
			* \return Returns whether the script was successfully loaded.
			* \param scriptName Path to script (without extension or with .adc extension, nothing else)
			* 
			* Example
			* \code
			* var mod = Module("MyModule");
			* 
			* // Load scripts/gt6/util/GameParameterUtilImpl.adc
			* var res = mod.load("scripts/gt6/util/GameParameterUtilImpl");
			* if (res)
			* {
			* 	// Module loaded
			* }
			* \endcode
			* */
			Bool load(
				String scriptName);

			/** \brief Defines a new module within this module. */
			void defineModule(Module module);

			/** \brief Defines a new module within this module. */
			void defineModule(Object symbol, Module module);

			/** \brief Defines a new class within this module. */
			void defineClass(Class class);

			/** \brief Defines a new class within this module. */
			void defineClass(Object symbol, Class class);

			/** \brief Defines a new static within this module. */
			void defineStatic(String staticName, Object staticValue);

			/** \brief Defines a new attribute within this module. */
			void defineAttribute(String attributeName, Object attributeValue);

			/** \brief Imports a module onto this one.
			\code
			var mod = Module("myModule");
			mod.import(main, "*");
			var dir = mod["PROJECT_ROOT_DIR"];
			return dir;
			\endcode
			*/
			void import(Module module, Object symbol);
			
			/** \brief Imports a module onto this one with the specified alias. */
			void import(Module module, Object symbol, Object alias);

			/// @brief Removes a specific static member from the module by name.
			void removeStatic(String staticName);
			
			/// @brief Clears all static members from the module.
			void clearStatic();
			
			/** \brief Performs a callback on each attribute in the module. 
				\param func Callback. Array is [Symbol, ModuleVariable]
			*/
			void each_attribute(FunctionObject<Array> func);

			/** \brief Creates a new array populated with the results of calling a provided function on every element in the calling array. 
			* \param func Callback. Array is [Symbol, ModuleVariable]
			*/
			void map_attribute(FunctionObject<Array> func);
			
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