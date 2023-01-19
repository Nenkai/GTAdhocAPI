using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a vector 3 attribute .*/
	public class MVector3Attribute : public MUserAttribute
	{
		public:
            /** \brief Constructs a new attribute from the specified vector3 [X, Y, Z]. */
            MVectorAttribute(String name, Array<Float> vec2) { };
	};
};
