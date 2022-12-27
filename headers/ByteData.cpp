namespace System
{
	/* Built-in byte data/array object */
	class ByteData : public Object, IByteData, IArray
	{
		public:
		
			/// @brief constructor taking no param
			ByteData() { };
			
			/// @brief Initializes a byte data from the specified object.
			ByteData(Object obj) { };

			/// @brief Initializes a byte data from the specified object (does not seem to work) and the specified size.
			ByteData(Object unknown, Int size) { };

			/// @brief Gets the size of the buffer
			UInt size;

			/// @brief Gets or sets the alignment
			UInt align;

			/** \brief Resizes the byte data to the specified size. */
			void resize(Int size);

			/** \brief Unpacks the byte data into an array of values from the specified format string. */
			Array unpack(String fmt);

			/** \brief Fills the byte data with the specified value. */
			void fill(Byte value);

			/** \brief Clears the byte data. */
			void clear();

			/** \brief Appends to the byte data. */
			operator+() {};
			
			Bool operator==() {};
			Bool operator!=() {};
	}
}