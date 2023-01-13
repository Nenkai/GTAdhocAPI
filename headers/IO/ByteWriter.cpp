using namespace System;

namespace IO
{
	/** \brief Stream writer for byte buffers. */
	class ByteWriter : public StreamWriter
	{
		public:
		
			/// @brief constructor taking no param
			ByteWriter() { };
			
			/// @brief Constructs a new ByteWriter from the specified object buffer for writing
			ByteWriter(Object data) { };

			/** \brief Opens a buffer for byte writing.
			*/
			Bool open(Object data);
	}
}