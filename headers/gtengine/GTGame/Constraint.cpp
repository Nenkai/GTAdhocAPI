using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class Constraint
	{
		  public:
			Int transmission;
			Int driving_line;
			Int asm;
			Int tcs;
			Int abs;
			PARTS_TIRE limit_tire_f;
			PARTS_TIRE need_tire_f;
			PARTS_TIRE suggest_tire_f;
			PARTS_TIRE limit_tire_r;
			PARTS_TIRE need_tire_r;
			PARTS_TIRE suggest_tire_r;
			Int simulation;
			Int active_steering;
			std::vector<MCarThin> cars;
			Int drift_type;
			Int suggested_gear;
			Int in_car_view;
			PARTS_TIRE enemy_tire;
			Int restrictor_limit;

			Bool checkIfQualified(MCarParameter cp, Array unk = nil);
			void apply(MCarParameter cp, Array unk = nil)
			Bool isDefault();

    }		
}