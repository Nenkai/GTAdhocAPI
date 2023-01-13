using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Wrapper over a SQLite database file for SpecDB operations.
	\details Most of the car_code versions of the functions will first fetch the label, 
	preferably always provide a label if possible. */
	class MSpecDB : public Object
	{
		  public:
			static const UInt NO_CODE = -1;

			// ModelName, Label, NapeJpn, NameEng, Pitcrew, Name, Map, Logo, BaseName
			// LoadingBg, CourseCategory, Length, Straight, Elevation, CountryFlag,
			// BaseTimeMin, StartDateTime, AccelerationOfGravity, Altitude, Latitude,
			// NorthDir, TimeZone, Online, Course, Corner, DriftOk, Oval, HasReverse, 
			// EntryMax, EntryMax3d, DLC, Kart, KartOnly, ChangeWeather, ChangeTime, CelsiusBase0,
			// CelsiusMin0, CelsiusMax0, CelsiusBase1, CelsiusMin1, CelsiusMax1, Arcade,
			// TimeProgressSpeed, Reverse, SummerTimeDaybegin, SummerTimeDayEnd, SummerTimeShift,
			// StarCatalogLevel, AstronomyTextureLevel, Condition, StartinGridCount, PitStopCount,
			// PWY, Scenery, Rail, NoPrecipitation, NoWind, PrecRainOnly, PrecSnowOnly, Loop
			static STStructure COURSE;

			/** \brief Gets the supported version */
			static UInt getVersion();

			/** \brief Gets the DB File Name i.e "DB0106.dat" 
			\details Result from snprintf(name,flags,"DB%04d.dat", VERSION) - Can't be more than 32 chars */
			static String getDBFileName();

			static void initialize(MSqlite sqlite_instance, String carname_filename, Bool unk = false);
			static void finalize();

			/** \brief Returns whether a car is under development - unfinished 
			\details Depends on GENERIC_CAR->ModelCode == -1, DEFAULT_PARTS->(Any Tire) == -1, WHEEL row exists */
			static Bool isUnderDevelopmentCar(String label);

			/** \brief Returns whether a car is under development - unfinished 
			\details Depends on GENERIC_CAR->ModelCode == -1, DEFAULT_PARTS->(Any Tire) == -1, WHEEL row exists */
			static Bool isUnderDevelopmentCar(UInt car_code);

			/** \brief Returns a car's label for a car code. 
			\details CarLabel from GENERIC_CAR. */
			static String getCarLabel(UInt car_code);

			/** \brief Returns a car's code for a car label. 
			\details CarCode from GENERIC_CAR, OR Code from TUNED_CARS. */
			static String getCarCode(String label);

			/** \brief Returns a car's code for a car code. (Pointless)*/
			static String getCarCode(UInt car_code);

			/** \brief Returns a car's name for a car label. 
			\details Depends on the CarName.dat file. 
			\returns If not found, "--" is returned. */
			static String getCarName(String label);

			/** \brief Returns a car's name for a car code. 
			\details Depends on the CarName.dat file. 
			\returns If not found, "--" is returned. */
			static String getCarName(UInt car_code);

			/** \brief Returns a car's short name for a car label. 
			\details Depends on the CarName.dat file. 
			\returns If not found, "--" is returned. */
			static String getShortCarName(String label);

			/** \brief Returns a car's short name for a car code. 
			\details Depends on the CarName.dat file. 
			\returns If not found, "--" is returned. */
			static String getShortCarName(UInt car_code);

			/** \brief Returns a car's count of colors for a car label.
			\details Depends on GENERIC_CAR->NumColor */
			static Int getCarVariation(String label);

			/** \brief Returns a car's color name for a label and color index.
			\details Label can be from GENERIC_CAR or TUNED_CARS. 
			Depends on VARIATION->NameEng/NameJpn, depending on the global region set. 
			Index is matched against Depends on VARIATION->VarOrder. */
			static Int getCarColorName(String label, Int variation_index);

			/** \brief Returns a car's color name for a car code and color index.
			\details Depends on VARIATION->NameEng/NameJpn, depending on the global region set. 
			Index is matched against Depends on VARIATION->VarOrder. */
			static Int getCarColorName(UInt car_code, Int variation_index);

			/** \brief Returns a car's color name for a label and color index.
			\details Label can be from GENERIC_CAR or TUNED_CARS. 
			Depends on DRIVETRAIN->DriveTypeName, where it must be one of the following: FR, FF, 4WD, MR, RR. 
			\returns "---" if invalid type. */
			static String getCarDriveTrain(String label);

			/** \brief Returns a car's color name for a car code and color index.
			\details Depends on DRIVETRAIN->DriveTypeName, where it must be one of the following: FR, FF, 4WD, MR, RR. 
			\returns "---" if invalid type. */
			static String getCarDriveTrain(UInt car_code);

			/** \brief Returns whether a car is a standard model.
			\details Label can be from GENERIC_CAR or TUNED_CARS. 
			Depends on GENERIC_CAR->SpecifyFlags where SpecifyFlags >> 2 & 1 != 0.*/
			static Bool getCarDriveTrain(String label);

			/** \brief Returns whether a car is a standard model.
			\details Depends on GENERIC_CAR->SpecifyFlags where SpecifyFlags >> 2 & 1 != 0.*/
			static Bool getCarDriveTrain(UInt car_code);

			/** \brief Returns the main color/variation index for a car label.
			\details Label can be from GENERIC_CAR or TUNED_CARS. 
			Depends on GENERIC_CAR->MainColor. */
			static Int getCarVariationFlag(String label);

			/** \brief Returns the main color/variation index for a car code. 
			\details Depends on GENERIC_CAR->MainColor. */
			static Int getCarVariationFlag(UInt car_code);

			/** \brief Returns the country for a car label.
			\details Label can be from GENERIC_CAR or TUNED_CARS. 
			Depends on GENERIC_CAR->Country. */
			static Int getCarCountry(String label);

			/** \brief Returns the country for a car code.
			\details Depends on GENERIC_CAR->Country. */
			static Int getCarCountry(UInt car_code);

			/** \brief Returns the year for a car label.
			\details Label can be from GENERIC_CAR or TUNED_CARS. 
			Depends on GENERIC_CAR->Year. */
			static Int getCarYear(String label);

			/** \brief Returns the year for a car code.
			\details Depends on GENERIC_CAR->Year. */
			static Int getCarYear(UInt car_code);

			/** \brief Returns the price for a car label.
			\details Label can be from GENERIC_CAR or TUNED_CARS. 
			Depends on GENERIC_CAR->Price. */
			static Int getCarPrice(String label);

			/** \brief Returns the price for a car code.
			\details Depends on GENERIC_CAR->Price. */
			static Int getCarPrice(UInt car_code);

			/** \brief Returns the category for a car label.
			\details Label can be from GENERIC_CAR or TUNED_CARS. 
			Depends on GENERIC_CAR->Category. */
			static Int getCarCategory(String label);

			/** \brief Returns the category for a car code.
			\details Depends on GENERIC_CAR->Category. */
			static Int getCarCategory(UInt car_code);

			/** \brief Returns the label for a course label (Pointless). */
			static Int getCourseLabel(String label);

			/** \brief Returns the label for a course code.
			\details Depends on COURSE->Label. */
			static Int getCourseLabel(UInt course_code);

			/** \brief Returns the code for a course label. */
			static UInt getCourseCode(String label);

			/** \brief Returns the code for a course code (Pointless).
			\details Uses COURSE->Label, return COURSE->ID. */
			static UInt getCourseCode(UInt course_code);

			/** \brief Returns the code for a course label. 
			\details Uses COURSE->ModelName where "snprintf(name, 8,"s%03d",scenery_code)", returns COURSE->ID. */
			static UInt getCourseCodeFromSceneryCode(UInt scenery_code);

			/** \brief Returns the condition for a course label. 
			\details returns COURSE->Condition. */
			static UInt getCourseCondition(String label);

			/** \brief Returns the condition for a course code.
			\details returns COURSE->Condition. */
			static UInt getCourseCondition(UInt course_code);

			/** \brief Returns the CourseCondition for a set of tires.
			\details No DB operation is performed, just an enum convertion */
			static CourseCondition getCourseConditionFromTire(PARTS_TIRE tire);

			/** \brief Returns the tuner label for a car label.
			\details GENERIC_CAR row must exist, then GENERIC_CAR->Tuner is used against TUNER->ID. 
			Returns TUNER->TunerString. */
			static String getTunerLabel(String label);

			/** \brief Returns the category for a car code.
			\details GENERIC_CAR row must exist, then GENERIC_CAR->Tuner is used against TUNER->ID. 
			Returns TUNER->TunerString. */
			static String getTunerLabel(UInt car_code);

			/** \brief Returns the tuner string for a tuner ID.
			\details No DB operation performed, may be hardcoded cached engine map */
			static String getTunerString(UInt tuner_id);

			/** \brief Returns the tuner string for a country ID.
			\details No DB operation performed, may be hardcoded cached engine map */
			static String getCountryString(UInt country_id);

			/** \brief Checks for whether a specify flag is toggled for a car label.
			\details Checks against GENERIC_CAR->SpecifyFlags */
			static Bool checkFlag(String label, SpecifyFlags flag);

			/** \brief Checks for whether a specify flag is toggled for a car code.
			\details Checks against GENERIC_CAR->SpecifyFlags */
			static Bool checkFlag(UInt car_code, SpecifyFlags flag);
			
			/** \brief Returns max allowed entries for a course label. 
			\details returns COURSE->EntryMax. */
			static Int getCourseEntryMax(String label);

			/** \brief Returns max allowed entries for a course code.
			\details returns COURSE->EntryMax. */
			static Int getCourseEntryMax(UInt course_code);

			/** \brief Returns whether a course is snow or dirt for a course label. 
			\details returns whether COURSE->Condition >= 2
			\see CourseCondition */
			static Int isDirtSnow(String label);

			/** \brief Returns whether a course is snow or dirt for a course code.
			\details returns whether COURSE->Condition >= 2 
			\see CourseCondition */
			static Int isDirtSnow(UInt course_code);

			/** \brief Gets the total amount of paints in the database.
			\details SELECT COUNT(*) FROM PAINT_COLOR_INFO */
			static Int getPaintColorCount();

			/** \brief Returns whether a database table type is "ordered".
			\details This returns true for ENGINE and LIGHTWEIGHT */
			static Bool isOrderedType(CarPartsType type);

			/** \brief Returns a full course row for a course label. */
			static STStructure getCourseRow(String label);

			/** \brief Returns a full course row for a course code. */
			static STStructure getCourseRow(UInt course_code);

			static STStructure getCatalogSpec(String label);

			static STStructure getCatalogSpec(UInt car_code);
    }
}