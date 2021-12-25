namespace System
{
	class FileReader : public Object
	{
		public:
		
			/// @brief constructor taking no param
			FileReader() { };
			
			/// @brief Gets the size of the buffer
			Bool open(String path);
	}
}