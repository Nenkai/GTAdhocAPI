using namespace System;

namespace pdistd
{
	class MDomNode : public Object
	{
		public:

			MDomNode() { };

			void hasAttribute();
			void getAttribute();
			void getAttributeMap();
			void getFirstNode();
			void addNode();
			void addAttribute();
			void dump();
			void serialize();
			
			Object elems;
			Object attrs;

			Object value;
	}
}