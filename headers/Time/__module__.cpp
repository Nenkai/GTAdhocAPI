using namespace Adhoc;
using namespace System;
using namespace pdistd;

/** \brief Time utilities */
namespace Time
{
	/** \brief Functions for this module */
	public class __module__ : public Module
	{
		public:

			/** \brief Gets the current system time in microseconds
			\details Direct result from sys_time_get_system_time */
			static Long GetMicroSecond();
	};
};
