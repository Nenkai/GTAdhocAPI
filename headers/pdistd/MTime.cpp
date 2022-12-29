using namespace System;

namespace pdistd
{
	/** \brief Represents an object describing a date and time. 
	\details Internally uses Julian. */
	class MTime : public Object
	{
		public:

			/** \brief Gets a new time initialized to 0000/00/00 00:00:00 as UTC */
			MTime() { };

			/** \brief Gets a time formatted from input string - Should be UTC
				\param time_str Format must be 'yyyy/mm/dd hh:mm:dd' i.e 0000/00/00 00:00:00 */
			MTime(String time_str);

			/** \brief Gets the total milliseconds for this day (year/month/day is ignored) */
			Int racetime1000;

			/** \brief Gets the year component for this date */
			Int year;

			/** \brief Gets the month component for this date */
			Int month;

			/** \brief Gets the day component for this date */
			Int day;

			/** \brief Gets the hour component for this date */
			Int hour;

			/** \brief Gets the minute component for this date */
			Int minute;

			/** \brief Gets the second component for this date */
			Int second;

			/** \brief Returns the date as a C-Type time string i.e Sun Jan 1 13:00:01 2000 */
			String ctime();

			/** \brief Returns the date accounted with locale offset */
			MTime toLocal();

			/** \brief Returns the date accounted converted to GMT */
			MTime toGMT();

			/** \brief Returns timestamp as seconds (Julian) */
			Long getBySecond();

			/** \brief Sets timestamp from seconds (Julian) */
			void setBySecond(Long timestamp);

			/** \brief Sets the MTime's time (date is not altered!) */
			void setTimeFromMinutes(Int minutes);

			/** \brief Gets the time as string for current locale - France will be dd/MM/YYYY for instance */
			void getLocaleString();

			void setForCourse(Int seconds);

			/** \brief Gets MTime for current UTC */
			static MTime getCurrentTime();

			/** \brief Gets the number of days between two dates */
			static Int getDifferenceOfDay(MTime left, MTime right);

			/** \brief Gets the day of week (as number) */
			Int dow;

			/** \brief Whether two dates are equal */
			operator==() { };

			/** \brief Whether two dates are not equal */
			operator!=() { };

			/** \brief Whether a date is earlier to the other */
			operator<() { };

			/** \brief Whether a date is earlier or equal to the other */
			operator<=() { };

			/** \brief Whether a date is later to the other */
			operator>() { };

			/** \brief Whether a date is later or equal to the other */
			operator>=() { };
	}
}