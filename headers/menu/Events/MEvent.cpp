using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Base Event. */
	public class MEvent : public Object
	{
		public:
			/** \brief Getter-only. Event ID/Serial, incremented after each event. */
			UInt serial;

			Int priority;

			String tag;

			Bool clear_event;

			Int dispatchEvent();
	};
};
