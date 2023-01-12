using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Base Node Event. */
	public class MNodeEvent : public MEvent
	{
		public:

			/** \brief Getter-only. Gets the render context associated with this event. */
			MRenderContext context;

			/** \brief Getter-only. Gets the node associated with this event. */
			MNode node;

			/** \brief Getter-only. Gets the widget associated with this event. */
			MWidget widget;
	};
};
