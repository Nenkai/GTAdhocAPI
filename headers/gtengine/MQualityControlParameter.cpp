using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Represents multiplayer packet settings. */
	class MQualityControlParameter : public Object
	{
		  public:
			MQualityControlParameter() { };
			

			void deepCopy(MQualityControlParameter rbp);
			Bool isDefault();
			void setDefault();
			void setup();
			UInt getRate(Int unk);
			void setRate(Int unk, QualityControlRateType rate);
			void clearAllRateSet();
			void addRateSet(Int unk, UInt unk2, UInt unk3);

			/** \returns Map with results
			- "threshold" : (UInt)
			- "rate" : (UInt) */
			Array<Map> getRateSetList();

			void setSuitableTemplate(Int max, Int down, UInt room_max, VoiceQuality voice_quality, Bool mesh)
			
			Bool variable_control_enabled;
			Int vehicle_packet_interval;
			Int management_packet_interval;
			UInt control_interval;
			QualityControlTemplateType template_type;
    }
}