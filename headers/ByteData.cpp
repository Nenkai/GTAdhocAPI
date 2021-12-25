namespace System
{
	class ByteData : public Object
	{
		public:
		
			/// @brief constructor taking no param
			ByteData() { };
			
			/// @brief Gets the size of the buffer
			Int size;

			/// @brief Gets or sets the alignment
			Int align;

			void resize(Int size);

			Unknown unpack();
			void Fill(Unknown unk);
			void Clear();

			operator+() {};
			Bool operator==() {};
			Bool operator!=() {};
	}
}