namespace System
{
	class StreamWriter : public Object
	{
		public:

			/// @brief Writes a buffer.
			UInt write(ByteData buffer, Int index, Int count);

			/// @brief Seeks the stream to an offset.
			void seek(UInt offset);

			/// @brief Returns the position of the stream.
			UInt tell();

			/// @brief Closes the stream.
			void close();

			Int get();

			void flush(Int count);

			Int peek();

			/// @brief Gets or sets the endianess.
			Int endian;

			void writeBool(Bool bool);
			void writeByte(Byte byte);
			void writeShort(Short short);
			void writeInt(Int int);
			void writeLong(Long long));
			void writeUByte(UByte byte);
			void writeUShort(UShort ushort);
			void writeUInt(UInt uint);
			void writeULong(ULong ulong);
			void writeFloat(Float float);
			void writeDouble(Double double);
			void writeVarInt(Int int);
			void writeString(String string);
			void writeByteData(ByteData byteData);

	}
}