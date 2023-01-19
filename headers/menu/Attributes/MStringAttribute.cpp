using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a string attribute .*/
	public class MStringAttribute : public MUserAttribute
	{
		public:
            /** \brief Constructs a new attribute from the specified string [R,G,B,A]. */
            MStringAttribute(String name, String str) { };
	};
};
