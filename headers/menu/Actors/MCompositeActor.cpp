using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a composite actor. */
	public class MCompositeActor : public MActor
	{
		public:
            
            /** @brief constructor taking no param */
            MCompositeActor() { };

            Int loop_count;

            void clearActor();
			void clearActor(MRenderContext context);
			void insertActor(MActor unk, MActor unk2);
			void insertActor(MRenderContext context, MActor unk, MActor unk2);
			void appendActor(MActor actor);
			void appendActor(MRenderContext context, MActor actor);
			void removeActor(MActor actor);
			void removeActor(MRenderContext context, MActor actor);
			void replaceActor(MActor unk, MActor unk2);
			void replaceActor(MRenderContext context, MActor unk, MActor unk2);
			Int countActor();            

            /** \brief Same as clearActor() */
            void clearChild();

            /** \brief Same as clearActor() */
			void clearChild(MRenderContext context);

            /** \brief Same as insertActor() */
			void insertChild(MActor unk, MActor unk2);

            /** \brief Same as insertActor() */
			void insertChild(MRenderContext context, MActor unk, MActor unk2);

            /** \brief Same as appendActor() */
			void appendChild(MActor actor);

            /** \brief Same as appendActor() */
			void appendChild(MRenderContext context, MActor actor);
            
            /** \brief Same as removeActor() */
			void removeChild(MActor actor);

            /** \brief Same as removeActor() */
			void removeChild(MRenderContext context, MActor actor);
            
            /** \brief Same as replaceActor() */
			void replaceChild(MActor unk, MActor unk2);

            /** \brief Same as replaceActor() */
			void replaceChild(MRenderContext context, MActor unk, MActor unk2);

            /** \brief Same as countActor() */
			Int countChild();               
	};
};
