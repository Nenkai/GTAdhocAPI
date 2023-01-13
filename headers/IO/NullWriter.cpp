using namespace System;

namespace IO
{
	class NullWriter : public StreamWriter
	{
		public:
		
			/// @brief constructor taking no param
			NullWriter() { };
			
			Bool open(String path);
	}
}