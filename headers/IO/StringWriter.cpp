using namespace System;


namespace IO
{
	/** \brief Stream writer for writing strings. 
	\details writeInt doesn't work, writeByte, writeString does (didn't test others) */
	class StringWriter : public StreamWriter, IByteData
	{
		public:
		
			/// @brief constructor taking no param
			StringWriter() { };
			
			/// @brief Constructs a new StringWriter from the specified object buffer for writing
			StringWriter(Object data) { };

			/** \brief Opens a buffer for string writing.
			*/
			Bool open(Object data);
	}
}