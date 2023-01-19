using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a face color attribute .*/
	public class MFaceColorAttribute : public MUserAttribute
	{
		public:
            /** \brief Constructs a new attribute from the specified color [R,G,B,A]. */
            MFaceColorAttribute(String name, Array<Int> color) { };
	};
};
