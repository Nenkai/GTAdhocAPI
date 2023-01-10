using namespace Adhoc;
using namespace System;
using namespace pdistd;

/** \brief GT Engine API Interfacing & Enums */
namespace gtengine
{
	/** \brief Functions for this module */
	public class __module__ : public Module
	{
		public:
		    /** \details 
		    - nb_vehicle (STUInt)
		    - set_size (STUInt)
		    - car_size (STUInt)
		    - car_option_size (STUInt)
		    - replay_size (STUInt)
		    - sound_size (STUInt)*/
		    static STStructure MemoryAssign;
  
		    /** \brief Gets the GT Behavior version aka Physics version */
		    static Int getGtbVersion();
  
			/** \brief Returns whether this build is a developer version
			\details Compile-time Int that returns 0 on release */
		    static Int isDevelopVersion();

			static UInt COURSE_CODE_GENERATED = 543;

			static Int getSceneryCourseCode(ByteData ted);

			/** \returns Map with results
			- "scenery_code" - (UInt)
			- "rail_set_code" - (UInt)
			- "length" - (Float)
			- "straight" - (Float)
			- "corners" - (UInt)
			- "one_way" - (Bool) */
			static Map getCourseInfoFromTed(ByteData ted);

			static MBlob convertTedToMapData(ByteData ted);

			static Int createTedThumbnail(ByteData ted, String path);
			
		    static const Int EntryMax = 32;
		    static const Int PilotQuota = 4;
	};
};
