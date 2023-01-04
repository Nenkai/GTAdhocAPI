using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MCarStatus : public Object
	{
		  public:
		    Float getDirtiness();
			Float getGasConsumption();
			MCarParameter getParameter();
    }
}