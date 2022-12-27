using namespace System;

namespace pdistd
{
	/** Utility class for encrypting buffers (used in save) 
	\returns Algo documented at https://github.com/Nenkai/PDTools/blob/master/PDTools.Crypto/MCipher.cs */
	class MCihper : public Object
	{
		public:
			MBlob encrypt(ByteData data, Bool with_tsm = false);

			/** \brief Decrypts data
			\details Make sure it's at least 8 bytes (header), can crash console otherwise. 
			\returns nil if not decrypted. */
			MBlob decrypt(MBlob data, Bool with_tsm = false);
			
	}
}