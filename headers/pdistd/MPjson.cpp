using namespace System;

namespace pdistd
{
	/** \brief Handler for encoding strings into JSON */
	class MPjson : public Module
	{
		public:
		
		/** \brief constructor taking no param */
		MPJson() { };
		
		/** \brief JSON Encode string */
		String encode();
		
		/** \brief JSON Encode string 
		\param obj Use Map for key to value, a string returns {"length":1,"size":1,"value":null}, int returns {"value":null} 
		\param set_silent_mode Unknown. */
		static String Encode(Object obj, Bool set_silent_mode = false);
		
		/** \brief Set silent mode */
		static void SetSilentMode(Bool silent_mode);
	}
}