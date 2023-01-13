using namespace System;

namespace IO
{
	/** \brief Abstract class for stream reading. */
	class StreamReader : public Object
	{
		public:

			/// @brief Reads a buffer.
			UInt read(ByteData buffer, Int index, Int count);

			/// @brief Seeks the stream to an offset.
			void seek(UInt offset);

			/// @brief Returns the position of the stream.
			UInt tell();

			/// @brief Closes the stream.
			void close();

			Int get();

			void unget(Int count);

			Int peek();

			Bool readBool();
			Byte readByte();
			Short readShort();
			Int readInt();
			Long readLong();
			UByte readByte();
			UShort readUShort();
			UInt readUInt();
			ULong readULong();
			Float readFloat();
			Double readDouble();
			Int readVarInt();
			String readString();
			ByteData readByteData();
			ByteData readBuffer();
			String readChar();
			String readLine();
			String readLines();

			/// @brief Gets or sets the endianess.
			Int endian;

	}
}