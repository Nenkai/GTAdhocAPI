using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a rectangle - [x, y, w, h].*/
	public class MRectangle : public Object
	{
		public:
            /** @brief constructor taking no param */
            MRectangle() { };

            /** \brief Constructs a new rectangle from the specified sizes. */
            MRectangle(Float x, Float y, Float w, Float h) { };

            Float x;
            Float y;
            Float w;
            Float h;
	};
};
