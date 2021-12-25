namespace System
{
	class ByteReader : public StreamReader
	{
		public:
		
			/// @brief constructor taking no param
			ByteReader() { };
			
			Bool open(String path);
	}
}