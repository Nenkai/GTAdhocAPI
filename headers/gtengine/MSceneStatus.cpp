using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MSceneStatus : public Object
	{
		  public:
		    Float getWaterRetentionRate();

			/** \brief May return different values depending on MUnit::SetUnitOfTemperature() */
			Float getTemperature();
    }
}