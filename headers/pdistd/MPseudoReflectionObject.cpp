using namespace System;

namespace pdistd
{
	/** \brief Adhoc object serializer & accessor */
	class MPseudoReflectionObject : public Object
	{
		public:

			MPseudoReflectionObject(MPseudoReflectionObject master, String path) { };

			/** \brief Gets the array size of a member */
			Int getArraySize(String member_name);

			/** \brief Gets a specific member object by member name */
			MPseudoReflectionObject getMember();

			/** \brief Gets the members in this object
			\returns Member list, each field being ["MemberName", "TypeName", "ArrayLength"] */
			Array<Array<String, String, Int>> getMemberList();

			/** \brief Gets the value of this object if it has a primitive value */
			Object getValue();

			/** \brief Sets the value of this object */
			void setValue(Object value);

			/** \brief Creates a SDEF bytedata */
			ByteData getPmfByteData(Bool unk = false);

			/** \brief Loads from PMF aka SDEF file bytedata 
			\code
			// Creates new object
			var obj = pdistd::MPseudoReflectionObject();

			// Read PMF file
			var file = pdistd::ReadFile("sound_gt/etc/car_sound_gt5.pmf");
			var bytedata = file["buffer"];
			
			// Assign PMF data to object
			obj.setPmfByteData(bytedata);
			obj.getMemberList(); // [(Array)([(String)("engine_lpf_parameter"),(String)("EngineFilterParameter"),(Int)(-1)]), ...)]

			// Start reading objects
			var engine_lpf_parameter = obj.getMember("engine_lpf_parameter");
			var type_member = engine_lpf_parameter.getMember("type_");
			var type = type_member.getValue();

			// Using string paths
			var arr_size = pdistd::MPseudoReflectionObject::parseObjectPath(obj, "engine_lpf_parameter").getArraySize("gain_") // 4
			var gain = pdistd::MPseudoReflectionObject::parseObjectPath(obj, "engine_lpf_parameter.gain_[0]").getValue(); // -6.0
			\endcode */
			Bool setPmfByteData(ByteData pmfData);

			static MPseudoReflectionObject parseObjectPath(MPseudoReflectionObject object, String path);

	}
}