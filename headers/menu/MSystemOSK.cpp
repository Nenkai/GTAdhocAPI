using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Static functions for handling the system's on screen keyboard.*/
	public class MSystemOSK : public Module
	{
		public:
            
            /** \brief Opens OSK.
            \param config Map with config
            - "password_mode" - (Bool)
            - "separate_mode" - (Bool)
            - "continuous_mode" - (Bool) 
            - "limit_text" - (Int, Max 128)
            - "no_return" - (Bool) 
            */
			static Bool open(MRenderContext context, String text, MWidget widget, FunctionObject cb, Map config);
            static void end();
            static void abort();
            static void reserveMemory();
            static void clearReservedMemory();
            static Bool isOpend();
	};
};
