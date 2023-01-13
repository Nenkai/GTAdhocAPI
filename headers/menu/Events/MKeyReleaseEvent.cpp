using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a key released event (for onKeyRelease() ). 
	\details onKeyRelease() is usually fired when the user releases any key. */
	public class MKeyReleaseEvent : public MKeyEvent
	{
		public:

			/** @brief constructor taking no param */
			MKeyReleaseEvent() { };
	};
};
