using namespace System;

namespace pdistd
{
	/** \brief Blob Object (Based on ByteData)*/
	class MBlob : public Object, IByteData
	{
		public:
		
			MBlob() { };

			/** \brief Creates a new blob from a buffer. */
			MBlob(Object data) { };
	
			/** \brief Returns the size of the blob data. */
			Int size;

			/** \brief Reserves the specified data size for the blob. */
			void reserve(Int size, Bool with_tsm);

			/** \brief Copies the specified string into the blob. If the string is larger than the blob size, it will be trimed. */
			void copyFromString(String str);

			/** \brief Returns whether two blobs contain the same content. */
			void operator==(){};

			/** \brief Returns whether two blobs does not contain the same content. */
			void operator!=(){};

			Bool with_tsm;

			/** \brief Gets a new blob based on the current one. */
			MBlob referData(Int start_index = 0);

			/** \brief Stripped in release builds. */
			void glanceDump();

			/** \brief Peeks/Gets a value at a byte offset. */
			Int peek(Int offset);
			
	}
}