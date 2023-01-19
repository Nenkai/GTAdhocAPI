using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a fading actor. */
	public class MFadeActor : public MParallelActor
	{
		public:
            
			/** @brief Constructs a new fade actor. */
            MFadeActor(MWidget widget, Float unk = 1.0, Float unk2 = 1.0) { };

			/** \brief Defaults to 0.0. */
			Float slope;

			/** \brief Defaults to 0.0. */
			Float src_over;

			/** \brief Defaults to 0.0. */
			Float dest_over;
                    
			/** \brief Defaults to false. */
			Bool repeat;

			/** \brief Setter-only. */
			Float velocity;

			/** \brief Defaults to 0.5. */
			Float period;

			/** \brief Setter-only. Sets src_over and dest_over. */
			Float over;
	};
};
