using namespace System;

namespace pdistd
{
	class MPjson : public Module
	{
		public:
		
		/// @brief constructor taking no param
		MPJson() { };
		
		/** JSON Encode string */
		String encode();
		
		/** JSON Encode string */
		static String Encode(String string);
		
		/** Set silent mode */
		static void SetSilentMode(bool silentMode);
	}
}