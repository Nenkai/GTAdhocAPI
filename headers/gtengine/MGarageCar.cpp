using namespace System;

namespace gtengine
{
	/** \brief Represents a car in the garage file. */
	class MGarageCar : public Object
	{
		  public:
		  
		  	/** \brief Getter-only.
			\details Will check SpecDB */
			String short_name;

			/** \brief Getter-only. */
			UInt garage_id;

			/** \brief Getter-only. */
			UInt car_code;

			/** \brief Getter-only. */
			UInt power;

			/** \brief Getter-only. */
			UInt DLC;

			/** \brief Getter-only. */
			UInt NOS;

			/** \brief Getter-only. */
			UInt pp1k;

			/** \brief Getter-only. */
			Bool having_dirt_tire;

			/** \brief Getter-only. */
			Bool having_snow_tire;

			/** \brief Getter-only. */
			Bool invalid;

			/** \brief Getter-only. */
			UInt mass;

			/** \brief Getter-only. */
			UInt year;

			/** \brief Getter-only. */
			UInt country;

			/** \brief Getter-only. */
			UInt tuner;

			/** \brief Getter-only. */
			UInt drive_train;

			/** \brief Getter-only. */
			UInt aspiration_type;

			/** \brief Getter-only. */
			UInt ride_count;
			
			UInt favorite;

			/** \brief Getter-only. */
			UInt real_spec_hidden;

			/** \brief Getter-only. */
			UInt priceless;

			/** \brief Getter-only. */
			Int distance_km;
    }
}