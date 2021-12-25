namespace System
{
	class StringReader : public StreamReader
	{
		public:
		
			/// @brief constructor taking no param
			StringReader() { };
			
			Bool open(String path);
	}
}