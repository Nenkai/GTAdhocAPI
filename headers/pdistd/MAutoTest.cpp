using namespace System;

namespace pdistd
{
	/** \brief AutoTester 
	\details Config depends on config.txt which is provided in GT6 Gamescom Demo by accident 
	The auto tester is mostly stubbed in the sense that the loggers (Tty) are stubbed in release
	As specified in MLoggerManager
	*/
	class MAutoTest : public Object
	{
		public:

			static Bool isTesting(...);

			static String getName();

			/** \brief Depends on config.txt (options: AutoTestName/AutoTestDir) 
			\details That file is provided in GT6 Gamescom Demo */
			static MBlob getConfig();

			/** \brief Logs a report to the output (Tty), logger is stubbed 
			\details Prints through logger: [AUTOTEST]#### REPORT ####:%s */
			static void report(String name);

			/** \brief Logs a capture to the output (Tty), logger is stubbed
			\details Prints through logger: [AUTOTEST]#### CAPTURE ####:%s:main=%d:vram=%d:cpu0=%d:cpu1=%d:cpu2=%d:gpu=%d:fps=%d\n 
			Each global for each component is not assigned anywhere anyway (stubbed, again) */
			static void report(String msg);

			/** \brief Stubbed. */
			static void memBlockDump();

			/** \brief Finishes.
			\details Prints through logger: [AUTOTEST]#### FINISHED ####\n*/
			static void finish();

			static void setScheduledCapture(Float time, String name, Bool unk = false);

			/** \brief Stubbed. */
			static void setScheduledMemBlockDump(Float time);

			/** \brief Stubbed. */
			static void setScheduledFinish(Float time);

	}
}