using namespace System;

namespace menu
{
	/** \brief Unknown, intended for use with context.pushEvent() */
	class MScriptEvent : public MNodeEvent
	{
		public:

			/** \brief constructor taking no param */
			MScriptEvent() { };

			MScriptEvent(MRenderContext context, MNode node, String event_name, Array<Object> args = nil) { };
	}
}