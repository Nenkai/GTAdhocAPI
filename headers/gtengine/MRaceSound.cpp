using namespace System;
using namespace pdistd;

namespace gtengine
{
	class MRaceSound : public Object
	{
		  public:
			static void initializeGlobalParameter();
			Int start;
			Float world_se_volume;
			Float audience_volume;
			Float ambience_volume;
			Float audience_ref_distance;
			Float ambience_ref_distance;
			Float force_innerlv;
			Float engine_lpf_freq;
			Float engine_lpf_gain;
			Float engine_hpf_freq;
			Float engine_hpf_gain;
			String engine_hpf_type;
			Float muffler_lpf_freq;
			Float muffler_lpf_gain;
			String muffler_lpf_type;
			Float muffler_hpf_freq;
			Float muffler_hpf_gain;
			String muffler_hpf_type;
			Array engine_harmonics;
			Array engine_subharmonics;
			Array exhaust_subharmonics;

			/** \brief Stubbed. */
			Float engine_oct_gain;

			static void setRoadAttributeSoundParameter(Int attr_index, Int channel, Array<Map> appearances, Array<Map> controls);
			static MPseudoReflectionObject getGlobalSoundEffectMasterParameter();
			static MPseudoReflectionObject getCarSoundGlobalParameter();
    }
}