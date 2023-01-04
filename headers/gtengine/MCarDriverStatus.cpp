using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MCarDriverStatus : public Object
	{
		  public:
		    MCarDriverParameter getParameter();
			Bool isPitInModeRequestAcceptable(Int unk);
    }
}