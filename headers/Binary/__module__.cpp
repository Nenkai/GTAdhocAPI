using namespace Adhoc;
using namespace System;
using namespace pdistd;

/** \brief Binary module */
namespace Binary
{
	/** \brief Functions for this module */
	public class __module__ : public Module
	{
		public:

			/** \brief Packs an array of values into a buffer
			\param format Format string instructing how to build the byte data
			- b -> Byte
			- s -> Short
			- i -> Int
			- l -> Long
			- f -> Float
			- d -> Double

			Defaults to LITTLE endian. Use uppercase letters for BIG endian. 
			'bb' will pack 2 bytes (LE), 'IL' will pack one integer, one long (BE).
			\param values Array of values */
			static ByteData Pack(String format, Array values);

			/** \brief Unpacks an array of values from a buffer
			\param format Format string instructing how to read the byte data
			- b -> Byte
			- s -> Short
			- i -> Int
			- l -> Long
			- f -> Float
			- d -> Double

			Defaults to LITTLE endian. Use uppercase letters for BIG endian. 
			'bb' will unpack 2 bytes (LE), 'IL' will unpack one integer, one long (BE).
			\param values Array of values */
			static Array Unpack(String format, ByteData buffer);
	};
};
