using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MCourseGenerateData : public Object
	{
		  public:
		    MCourseGenerateData();

		    void reserve(ULong unk, ULong unk2);
			void copy(ByteData ted);
			void setRefer(ByteData ted);
			ULong maker_id;

    }
}