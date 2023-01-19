using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a transform. */
	public class MTransform : public Object
	{
		public:
            /** @brief constructor taking no param */
            MTransform() { };

            void scale(Float unk, Float unk2);
            void translate(Float unk, Float unk2);
            void rotate(Float rot);
            void skewX(Float amount);
            void skewY(Float amount);
            void identity();
	};
};
