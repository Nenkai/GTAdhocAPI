using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class Track
	{
		  public:
			ULong course_code;
			ULong generated_course_id;

			/** \brief Always nil in GT6 */
			Int course_pathway;

			MBlob edit_data;
			Int course_layout_no;
			std::vector<Gadget> gadgets;
			Int map_offset_world_x;
			Int map_offset_world_y;
			Int map_scale;
			Int is_omedeto_difficulty;

			/** \returns 2 UInt */
			Array getCourseMakerInfo();
			UInt getSceneryCourseCode();

    }		
}