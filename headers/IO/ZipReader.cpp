using namespace System;

namespace IO
{
	/** \brief Stream reader for reading from inflated files
	\details Uses fibers library with ADZip as identifier */
	class ZipReader : public StreamReader
	{
		public:
		
			/** @brief constructor taking no param */
			ZipReader() { };
			
			/** \brief Opens a ZipReader based on the input stream 
			\code
			var reader = IO::FileReader("file.deflated");
			var obj = IO::ZipReader(reader);
			// do read related operations
			\endcode */
			ZipReader(StreamReader base_stream) { };

			Bool open(StreamReader base_stream);
	}
}