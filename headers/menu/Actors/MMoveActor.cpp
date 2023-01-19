using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a moving actor. */
	public class MMoveActor : public MActor
	{
		public:
            
			/** @brief Constructs a new move actor. */
            MFadeActor(MWidget widget, Float dest_x, Float dest_y, Float unk = 1.0) { };

			void doFlip();
			void resetGeometry();
			Float destinationX;
			Float destinationY;

			/** \brief Defaults to 0.3. */
			Float ratio;

			/** \brief Defaults to false. */
			Bool repeat;

			/** \brief Defaults to false. */
			Bool linear;

			/** \brief Defaults to true. */
			Bool flip;
	};
};
