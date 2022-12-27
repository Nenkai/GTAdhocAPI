using namespace System;

namespace pdistd
{
	class MCipher : public Object
	{
		public:
			/** \brief Performs MCipher encryption on provided buffer object (using 0x3039 as seed)*/
			static MBlob encrypt(Object obj, Bool with_blob_tsm = false);

			/** \brief Performs MCipher decryption on provided buffer object (using 0x3039 as seed)*/
			static MBlob decrypt(Object obj, Bool with_blob_tsm = false);
	}
}