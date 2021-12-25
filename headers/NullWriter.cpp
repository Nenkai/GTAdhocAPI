namespace System
{
	class NullWriter : public StreamWriter
	{
		public:
		
			/// @brief constructor taking no param
			NullWriter() { };
			
			Bool open(String path);
	}
}