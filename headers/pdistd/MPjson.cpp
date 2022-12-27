using namespace System;

namespace pdistd
{
	class MPjson : public Module
	{
		public:
		
		/// @brief constructor taking no param
		MPJson() { };
		
		/** \brief JSON Encode string */
		String encode();
		
		/** \brief JSON Encode string 
		\param string Use Map for key to value, a string returns {"length":1,"size":1,"value":null}, int returns {"value":null} */
		static String Encode(Object obj, Bool set_silent_mode = false);
		
		/** \brief Set silent mode */
		static void SetSilentMode(Bool silent_mode);
	}
}