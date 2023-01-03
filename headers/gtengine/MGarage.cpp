using namespace System;

namespace gtengine
{
	/** \brief Represents a garage file. */
	class MGarage
	{
		  public:

		    MGarage();
			
			Bool initialize(String garage_path, UInt garage_max);

			/** \brief Same as initialize() */
			void create(String garage_path, UInt garage_max);

			Bool load(String path);
			void clear();
			Bool isConformed(MGarage other);
			void conform(MGarage other);
			Int getCount();
			Int getMax();
			Bool isExist(UInt code);
			Bool isFull();
			UInt addCar(MCarParameter car, Bool favorite = false, Bool priceless = false);
			void removeCar(UInt garage_id);
			void rideCar(UInt garage_id);
			void getOffCar();
			MCarParameter getCar(UInt garage_id);
			MGarageCar referGarageCar(UInt garage_id);
			MCarParameter getRidingCar();
			UInt getRidingGarageId();

			/** \param filter_params Parameters for filtering
			- "sort_type" - (Int)
			- "sort_order" - (Int)
			- "regulation" - (Regulation)
			- "filter_nationality" - (Array<Int>)
			- "filter_tuner" - (Array<Int>)
			- "filter_drivetrain" - (Array<Int>)
			- "favorite" - (Array<Int>)
			- "invalid" - (Array<Int>)
			- "filter_aspiration" - (Array<Int>)
			- "filter_category" - (Array<Int>)
			- "filter_dirt" - (Array<Int>)
			- "range_power_min" - (Array<Int>)
			- "range_power_max" - (Array<Int>)
			- "range_weight_min" - (Array<Int>)
			- "range_weight_max" - (Array<Int>)
			- "range_year_min" - (Array<Int>)
			- "range_year_max" - (Array<Int>)
			- "range_pp1k_min" - (Array<Int>)
			- "range_pp1k_max" - (Array<Int>)
			- "range_tire_min" - (Int)
			- "range_tire_max" - (Int)
			- "range_tire_f_min" - (Int)
			- "range_tire_f_max" - (Int)
			- "range_tire_r_min" - (Int)
			- "range_tire_r_max" - (Int)
			- "range_length_min" - (Int)
			- "range_length_max" - (Int)
			- "start"
			- "count"
			*/ 
			Array getCarList(Map filter_params);
			Int getCarCount(Map filter_params);
			Bool hasCar(UInt code);
			void updateCar(MCarParameter cp);
			void updateCarWithoutTrunk(MCarParameter cp);
			Int getCurrentSet(MCarParameter cp);
			void changeSet(Int unk, MCarParameter cp);
			UInt transfer(MGarage other, UInt garage_id);
			Bool isInvalid(UInt code);
			void setInvalid(UInt code, Bool invalid);

			/** \param message No more than 128 characters */
			String getComment(UInt garage_id, Int unk);
			void setComment(UInt garage_id, Int unk, String message);
			Bool hasDLCExpended(UInt unk);
			Array<UInt> getDLCValidCars();
			Array<UInt> getDLCInvalidCars();
			void copyDLCCondition(MGarage other);
			void beginUpdateInformation();
			void updateInformationOne();
			void endUpdateInformation(Bool unk_flag);
			Bool isDistanceUpdated();
    }
}