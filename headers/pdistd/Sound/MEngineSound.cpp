using namespace System;

namespace pdistd
{
	class MEngineSound : public Object
	{
		public:
		
			MEngineSound() { };

			static void loadPreset();
			static void unloadPreset();

			void allocate();
			void load();
			void play();
			void stop();
			void getEngineToneInfo();
			void getMufflerToneInfo();

			String engine_data_path;
			String muffler_data_path;
			Float engine_rpm();
			Float engine_volume();
			Float muffler_volume();
			Float engine_pan();
			Float muffler_pan();
			Float engine_distance();
			Float muffler_distance();
	}
}