namespace IO
{
	class NullReader : public StreamReader
	{
		public:
		
			/// @brief constructor taking no param
			NullReader() { };

			Bool open(String path);
	}
}