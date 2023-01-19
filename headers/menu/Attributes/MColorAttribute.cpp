using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a boolean attribute .*/
	public class MColorAttribute : public MUserAttribute
	{
		public:
            /** \brief Constructs a new attribute from the specified color [R,G,B,A]. */
            MColorAttribute(String name, MColorObject color) { };
	};
};
