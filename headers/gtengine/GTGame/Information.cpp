using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class Information
	{
		  public:
			LocalizeText title;
			LocalizeText one_line_title;
			LocalizeText description;
			LocalizeText advanced_notice;
			LocalizeText registration_notice;
			Int narration_id;
			Int race_info_minute;
			String logo_image_path;
			UInt logo_image_layout;
			MBlob logo_image_buffer;
			String logo_other_info;
			String flier_image_path;
			MBlob flier_image_buffer;
			String flier_other_info;
			String race_label;
			Bool isDefault();
			void freezeText();
    }		
}