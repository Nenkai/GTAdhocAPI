namespace System
{
	/* Reads from inflated files (using fibers library with ADZip as identifier)*/
	class ZipReader : public StreamReader
	{
		public:
		
			/// @brief constructor taking no param
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