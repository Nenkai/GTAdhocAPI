using namespace System;
using namespace pdistd;

namespace gtengine::GTGame
{
	class Regulation
	{
		  public:
			Int limit_pp;
			Int need_pp;
			PARTS_TIRE limit_tire_f;
			PARTS_TIRE need_tire_f;
			PARTS_TIRE limit_tire_r;
			PARTS_TIRE need_tire_r;
			std::vector<CarCategory> car_categories;
			std::vector<MCarThin> cars;
			Int need_license;
			Int limit_power;
			Int need_power;
			Int limit_weight;
			Int need_weight;
			Int limit_length;
			Int need_length;
			DrivetrainType need_drivetrain;
			Array<DrivetrainType> need_drivetrain_list;
			AspirationType need_aspiration;
			Array<DrivetrainType> need_aspiration_list;
			Int limit_year;
			Int need_year;
			Int limit_aspec_level;
			Int need_aspec_level;
			Int limit_bspec_level;
			Int need_bspec_level;
			Array<Int> limit_bspec_driver_count;
			Array<Int> need_bspec_driver_count;
			Array<Tuner> tuners;
			Array<Country> countries;
			EntitlementType need_entitlement;
			Int tuning;
			Int NOS;
			Int kart_permitted;
			Int restrictor_limit;
			std::vector<MCarThin> ban_cars;
			Int car_tag_id;

			Bool checkIfQualified(MCarParameter cp, Array unk = nil);
			Bool checkIfQualifiedCar(MCarParameter cp, Bool unk = false);
			Bool isDefault();

			/** \returns Array with elements for each attribute */
			Array createInfo();

    }		
}