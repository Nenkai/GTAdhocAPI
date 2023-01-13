using namespace System;

namespace pdiext
{
	/** \brief Engine Sound Interface for playing engines & mufflers */
	class MEngineSound : public Object
	{
		public:
			/** \brief constructor taking no param */
			MEngineSound() { };

			/** \brief Mostly dummied */
			static Bool loadPreset(String preset_name, String unk);

			/** \brief Mostly dummied */
			static Bool unloadPreset(String unk);

			/** \brief Allocate the max engine interface buffer size - Normally 400kb or 500kb */
			void allocate(Int size);

			/** \brief Loads the engine sound */
			void load();

			/** \brief Start playing it */
			void play();

			/** \brief Stop playing it */
			void stop();

			/** \returns Array of tones
			- "center_rpm" - (Int)
			- "min_rpm" - (Int)
			- "max_rpm" - (Int)
			- "volume" - (Int)
			- "center_pitch" - (Int) */
			Array<Map> getEngineToneInfo();

			/** \returns Array of tones
			- "center_rpm" - (Int)
			- "min_rpm" - (Int)
			- "max_rpm" - (Int)
			- "volume" - (Int)
			- "center_pitch" - (Int) */
			Array<Map> getMufflerToneInfo();

			/** \brief Sets or gets the path to the engine data file (i.e carsound/engine/%{id}) */
			String engine_data_path;

			/** \brief Sets or gets the path to the muffler file (i.e carsound/%{type}/%{id}) */
			String muffler_data_path;

			Float engine_rpm;

			/** \brief 0.0 to 1.0 */
			Float engine_volume;

			/** \brief 0.0 to 1.0 */
			Float muffler_volume;
			
			Float engine_pan;
			Float muffler_pan;
			Float engine_distance;
			Float muffler_distance;
	}
}