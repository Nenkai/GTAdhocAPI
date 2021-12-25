namespace System
{
	class ZipReader : public StreamReader
	{
		public:
		
			/// @brief constructor taking no param
			ZipReader() { };
			
			Bool open(String path);
	}
}