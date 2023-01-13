using namespace Adhoc;
using namespace System;
using namespace pdistd;

/** \brief Top Level */
namespace __toplevel__
{
	/** \brief Functions for this module */
	public class __module__ : public Module
	{
		public:

            /** \brief Gets the current platform i.e "ps3" */
            static String PLATFORM;
			
            /** \brief Gets the system name i.e "playstation" */
            static String SYSTEM;

            /** \brief Gets the home path i.e "/" */
            static String HOME;

            /** \brief Stubbed. */
            static void setenv();

            /** \brief Stubbed. */
            static void adhoc_trace_object();

            /** \brief Stubbed. */
            static void MemoryDebug_address();

            /** \brief Stubbed. */
            static void MemoryDebug_begin();

            /** \brief Stubbed. */
            static void MemoryDebug_end();

            /** \brief Stubbed. */
            static void MemoryDebug_size();

            /** \brief Stubbed. */
            static void MemoryDebug_size_min();

            /** \brief Stubbed. */
            static void MemoryDebug_size_max();

            /** \brief Stubbed. */
            static void MemoryDebug_assert();

            /** \brief Stubbed. */
            static void MemoryDebug_print();

            /** \brief Stubbed. */
            static Object getMemoryDebugPoolWork();

            /** \brief Stubbed. */
            static Object getMemoryDebugPoolCode();

            /** \brief Stubbed. */
            static void SetDebugLevel();

            /** \brief Stubbed. */
            static void MemoryBlockDump();

            /** \brief Throws an adhoc exception */
            static void ErrorAbort(String message);

            /** \brief Exits with return code 0. */
            static void exit();

            /** \brief Exits with specified return code. */
            static void exit(Int return_code);

            /** \brief Returns whether an object is a nil pointer. */
            static Int nilp(Object obj);

            /** \brief Unknown, seems stubbed. Returns object provided */
            static Object sym_id(Object obj);

            /** \brief Release Print. Stubbed. 
            \returns Arg count */
            static Int release_pr(Object obj, ...);

            /** \brief Release Print line. Stubbed. 
            \returns Arg count */
            static Int release_prln(Object obj, ...);

            /** \brief Debug Print. Stubbed. 
            \returns Arg count */
            static Int pr(Object obj, ...);

            /** \brief Debug Print line. Stubbed. 
            \returns Arg count */
            static Int prln(Object obj, ...);

            /** \brief Stubbed. */
            static void DumpBuiltinModule(); 

            /** \brief For async use */
            static void AwaitTaskStart();

            /** \brief For async use */
            static Object AwaitTaskResult(Object unk);
	};
};
