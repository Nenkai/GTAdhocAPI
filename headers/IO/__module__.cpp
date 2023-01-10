using namespace Adhoc;
using namespace System;
using namespace pdistd;

/** \brief Libraries for file reading/writing */
namespace IO
{
	/** \brief Functions for this module */
	public class __module__ : public Module
	{
		public:

			static const Int READ = 0;
			static const Int WRITE = 1;
			static const Int APPEND = 2;

			static const Int GOOD = 0;
			static const Int END = 1;
			static const Int BAD = 2;

			/** \brief Serializes an object into a STStruct blob */
			static MBlob Serialize(Object obj)

			/** \brief Serializes an object into the provided buffer 
			\returns Bytes written */
			static UInt Serialize(ByteData buffer, ByteData data);

			/** \brief Deserializes an object from a STStruct blob 
			\returns Map of all the fields */
			static Map Deserialize(ByteData buffer)

			/** \brief Deserializes an object from a STStruct blob */
			static UInt Deserialize(ByteData buffer, Object unk);
	};
};
