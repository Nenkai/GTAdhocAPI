using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class StageResetData
	{
		  public:
			String code;
			Int coord;
			Int target_id;
			Int resource_id;
			Float x;
			Float y;
			Float z;
			Float rotYdeg;
			Float vcoord;
			Bool isDefault();
    }		
}