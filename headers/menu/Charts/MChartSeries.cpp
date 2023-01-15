using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Base series for chart widgets. */
	public class MChartSeries : public MNode
	{
		public:
			MActor first_actor;
			MActor last_actor;

			void clearActor();
			void clearActor(MRenderContext context);

			void insertActor(MActor actor, MActor actor);
			void insertActor(MRenderContext context, MActor actor, MActor actor);

			void appendActor(MActor actor);
			void appendActor(MRenderContext context, MActor actor);

			void removeActor(MActor actor);
			void removeActor(MRenderContext context, MActor actor);

			void replaceActor(MActor actor, MActor actor);
			void replaceActor(MRenderContext context, MActor actor, MActor actor);

			Int countActor();
	};
};
