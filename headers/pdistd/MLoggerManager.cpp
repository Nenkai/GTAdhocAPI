using namespace System;

namespace pdistd
{
	/** \brief Internal logger manager
	\details This is also accessible from TinyWeb as /admin/ 
	The actual logger will be mostly stubbed (LoggerOutputTty) - stripped on release */
	class MLoggerManager : public Object
	{
		public:

			/** \brief Sets the global log level */
			static void SetLogLevel(LoggerLogLevel level);

			/** \brief Sets a logger's log level */
			static void SetLogLevel(LoggerLogLevel level, String logger_name);
	}
}