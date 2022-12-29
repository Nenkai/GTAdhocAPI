namespace IO
{
	/** \brief Abstract class for stream writing. */
	class StreamWriter : public Object
	{
		public:

			/// @brief Writes a buffer.
			UInt write(ByteData buffer, Int index, Int count);

			/// @brief Seeks the stream to an offset.
			void seek(UInt offset);

			/** \brief Returns the position of the stream.
			\details unk must always be provided for some reason!
			\param unk Always provide this! */
			UInt tell(Object unk);

			/// @brief Closes the stream.
			void close();

			void flush();

			void put(Int value);

			/// @brief Gets or sets the endianess.
			Int endian;

			void writeBool(Bool bool);
			void writeByte(Byte byte);
			void writeShort(Short short);
			void writeInt(Int int);
			void writeLong(Long long);
			void writeUByte(UByte byte);
			void writeUShort(UShort ushort);
			void writeUInt(UInt uint);
			void writeULong(ULong ulong);
			void writeFloat(Float float);
			void writeDouble(Double double);

			/** \brief Writes a byte data */
			void writeByteData(ByteData byteData);

			void writeVarInt(Int int);
			void writeString(String string);
			void writeChar(String char);
			void writeLine(String line);
			void writeBuffer(ByteData buffer);
	}
}