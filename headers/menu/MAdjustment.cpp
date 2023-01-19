using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents an adjustment object.*/
	public class MAdjustment : public Object
	{
		public:
                  MAdjustment() { };

                  void adjust(Float x, Float unk_width, Float unk_width2);
                  void adjust(Float x, Float unk_width, Float unk_width2, Float unk3);
      
	};
};
