using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MDragRaceMode : public Object
	{
		  public:
		  	/** \brief constructor taking no param */
		    MDragRaceMode() { };
			
			void connect(MOrganizer organizer);
			Int burnout_time;
			Int interval_time;
			Int start_type;
			Int length;
			Int length_type;
			Float prestage_offset;
			Float stage_offset;
			Float start_grid;
			Int start_timing_range;
    }
}