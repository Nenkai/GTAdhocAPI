namespace System
{
	class ByteWriter : public StreamWriter
	{
		public:
		
			/// @brief constructor taking no param
			ByteWriter() { };
			
			Bool open(String path);
	}
}