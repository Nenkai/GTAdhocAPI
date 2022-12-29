using namespace System;

namespace pdistd
{
	/** \brief Provides buffer encryption/decryption utilities 
	\brief Algo documented at https://github.com/Nenkai/PDTools/blob/master/PDTools.Crypto/MCipher.cs*/
	class MCipher : public Object
	{
		public:
			/** \brief Performs MCipher encryption on provided buffer object (using 0x3039 as seed) */
			static MBlob encrypt(Object obj, Bool with_blob_tsm = false);

			/** \brief Performs MCipher decryption on provided buffer object (using 0x3039 as seed)
			\details Make sure it's at least 8 bytes (header), can crash console otherwise. 
			\returns nil if not decrypted. */
			static MBlob decrypt(Object obj, Bool with_blob_tsm = false);
	}
}