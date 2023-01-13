using namespace System;

namespace pdiext
{
	/** \brief Represents a decrypt manager for the file devices 
	\details This was used in GT5P JP Demo to decrpyt certain car files once unveiled
	This is used on the file device level */
	class MBufferDecryptManager : public Object
	{
		public:
			/** \brief constructor taking no param */
			MBufferDecryptManager() { };

			/** \brief Registers a new path/file with decryption key to use by the file device */
			Int addKey(String path, ByteData salsa_key);
	}
}