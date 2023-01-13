using namespace System;

namespace IO
{
	/** \brief Stream reader for byte buffers. */
	class ByteReader : public StreamReader, IByteData
	{
		public:
		
			/// @brief constructor taking no param
			ByteReader() { };
			
			/// @brief Constructs a new ByteReader from the specified object buffer for reading
			ByteReader(Object data) { };

			/** \brief Opens a buffer for byte reading.
			*/
			Bool open(Object data);
	}
}