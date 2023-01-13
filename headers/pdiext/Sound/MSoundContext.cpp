using namespace System;

namespace pdiext
{
	class MSoundContext : public Object
	{
		public:
			/** \brief constructor taking no param */
			MSoundContext() { };

			Bool enable;
			void setExclusiveUser();
			Bool isExclusiveUser();
			Float interior_pan_distance;
			void setReverbMaster();

			Object reverb_master;
			Object late_reverb_master;
			Object master_output_gain;
			Object sound_driver_volume_scale;
			Object reference_sound_level;
			Object distance_filter_type;
			Object voice_agc_exp;
			Object voice_agc_gain;
			Object voice_agc_comp_rate;
			Object voice_agc_exp_rate;
			Object voice_agc_limit;
			void setStereoPanWidth();
			void getReverb();
			void setReverb();
			void getDelay();
			void setDelay();
			void setWorldEQ();
			void getWorldEQ();
			Object bgm_upmix_preset; 
			void getEffectorParameter();
			void setEffectorParameter();
			void getBusEqualizer();
			void setBusEqualizer();
	}
}