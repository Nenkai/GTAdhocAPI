using namespace System;

namespace pdistd
{
	/** \brief Handler for extra boot configuration 
	\details Actual map reading in engine seems mostly stubbed */
	class AppBootConfig : public Object
	{
		public:

			static Bool GetBool(String parameter);
			static Float GetFloat(String parameter);
			static Int GetInteger(String parameter);
			static String GetParameter(String parameter);
			static String GetString(String parameter);
			
	}
}