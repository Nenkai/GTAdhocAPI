namespace IO
{
	/** \brief Stream reader for reading from strings. */
	class StringReader : public StreamReader, IByteData
	{
		public:

			/// @brief constructor taking no param
			StringReader() { };
			
			/** \brief Creates a string reader from provided string */
			StringReader(string str) { };

			Bool open(String str);
	}
}