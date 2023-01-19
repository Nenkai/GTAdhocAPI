using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a vector attribute .*/
	public class MVectorAttribute : public MUserAttribute
	{
		public:
            /** \brief Constructs a new attribute from the specified vector [X, Y]. */
            MVectorAttribute(String name, Array<Float> vec2) { };
	};
};
