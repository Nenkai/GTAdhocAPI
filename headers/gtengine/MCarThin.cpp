using namespace System;

namespace gtengine
{
	/** \brief Represents a thin representation of a car. */
	class MCarThin : public Object
	{
		  public:
		  
		  	MCarThin();

		    MCarThin(ULong code, Int color = 0);

			/** \brief Creates a MCarThin from the specified car label.
			\details Use "GARAGE_CAR" for the current car (code will be -1). 
			Can be a label from GENERIC_CAR or TUNED_CARS. */
			MCarThin(String label, Int color = 0);
			
		  	operator==();
			operator!=();

			void deepCopy(MCarThin src);
			String getCarLabel();
			ULong getCarCode();

			
			void setCarCode(ULong code);

			/** \param label GENERIC_CAR/TUNED_CARS label. Can also be "GARAGE_CAR" for the current car. 
			\details Can be a label from GENERIC_CAR or TUNED_CARS. */
			void setCarCode(String label);

			ULong code;
			Int color;

			/** \brief Database label of the car from GENERIC_CAR.
			\details If "GARAGE_CAR" was specified, this will return "garage". */
			String label;

			/** \brief Getter-only. */
			Bool is_tuned_car;

    }
}