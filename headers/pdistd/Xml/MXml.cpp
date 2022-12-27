using namespace System;

namespace pdistd
{
	class MXml : public Object
	{
		public:

			/** Creates a new XML object */
			MXml() { };

			/** \brief Parses the provided data. Use result() to get the dom list. */
			void parse(ByteData data);

			/** Getter only. Returns the parsing result */
			MDomNode result;
	}
}