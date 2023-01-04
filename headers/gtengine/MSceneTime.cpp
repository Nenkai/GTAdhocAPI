using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MSceneTime : public Object
	{
		  public:
		  	/** \returns In seconds */
			Int getTime();

			/** \returns In seconds */
			Int getAdjust();
    }
}