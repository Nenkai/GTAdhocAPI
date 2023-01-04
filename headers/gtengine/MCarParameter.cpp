using namespace System;

namespace gtengine
{
	/** \brief Represents a car entity */
	class MCarParameter : public Object
	{
		public:
            /** \brief Constructs an empty MCarParameter. */
            MCarParameter();

            /** \brief Constructs a MCarParameter from a MCarThin. */
            MCarParameter(MCarThin car_thin);

            /** \brief Constructs a MCarParameter from a car label. 
            \details This will call setCarCode(). */
            MCarParameter(String label);

            /** \brief Constructs a MCarParameter from a car code. 
            \details This will call setCarCode(), but only from GENERIC_CAR. */
            MCarParameter(UInt code);

            /** \brief Gets the latest supported version of MCarParameter. */
            static UInt getVersion();

            /** \brief Returns whether the parameter is vacant - no car assigned to it. */
            Bool isVacant();

            /** \brief Clears the car representing this parameter. */
            void clear();

            /** \brief Gets the size of the MCarParameter structure. 
            \details This value is generated from serialization, it may not be that fast. */
            static UInt getSize();

            /** \brief Performs a deep copy of the parameter. */
            MCarParameter deepCopy(MCarParameter parameter);

            /** \brief Performs a copy of the parameter without parts, settings & purchase bits. */
            MCarParameter copyWithoutTrunk();

            void copyForChangeSet();
            void copyForRevertingSetting();

            /** \brief Sets all changeable parameters from the specified parameter 
            \details All condition states (body, oil, etc), purchase flags, win count & more*/
            void setChangeableParams(MCarParameter param);

            /** \brief Gets the car label of this parameter 
            \details Calls MSpecDB::getCarLabel() with the parameter's code field */
            String getCarLabel();

            /** \brief Gets the car code of this parameter */
            UInt getCarCode();

            /** \brief Sets the car code of this parameter.
            \details This WILL set all parts linked to the specified code. 
            Purchase bits will also be set accordingly.
            GENERIC_CAR & TUNED_CARS labels are supported. */
            void setCarCode();

            /** \brief Gets the current color name for this car parameter.
            \details WILL call SpecDB on VARIATION with VarOrder. */
            String getColorName();

            /** \brief Gets the current color's paint id for this car parameter.
            \details WILL call SpecDB. */
            Int getPaintID();

            /** \brief Car color (variation order/index).
            \details When setting this value, a check will be made on SpecDB on whether its not over the maximum var order. */
            Int color;

            /** \brief Gets the car's maximum variation order/index. 
            \details WILL call SpecDB. */
            Int getColorMax();

            /** \brief Will always return 1. */
            Int getPaintColorCount();

            /** \brief Gets the current paint color/variation order.
            \param unk Must always be 0. */
            Int getPaintColor(Int unk);

            /** \brief Sets the current paint color/variation order.
            \param unk Must always be 0. */
            void setPaintColor(Int unk, Int color);

            /** \brief Sets the current wheel code & other parameters 
            \details WILL do some SpecDB operations on WHEEL, WHEEL_EX */
            void setWheelCode(UInt wheel_code, UInt color, UInt inch_up);

            /** \brief Getter-only. Gets the current wheel code.*/
            UInt wheel;

            /** \brief Getter-only. Gets the current wheel code.*/
            UInt wheel_color;

            /** \brief Gets or sets the wheel's diameter. */
            Int wheel_diameter;

            /** \brief Gets or sets the wheel's inchup. */
            Int wheel_inchup;

            /** \brief Will always return 1. */
            Int getWheelPaintColorCount();

            /** \brief Gets the wheel's paint color.
            \param unk Must always be 0. */
            Int getPaintColor(Int unk);

            /** \brief Sets the wheel's paint color.
            \param unk Must always be 0. */
            Int setWheelPaintColor(Int unk, Int color);

            /** \brief Will always return 1. */
            Int getBrakeCaliperPaintColorCount();

            /** \brief Gets the brake caliper's paint color.
            \param unk Must always be 0. */
            Int getBrakeCaliperPaintColor(Int unk);

            /** \brief Sets the brake caliper's paint color.
            \param unk Must always be 0. */
            Int setBrakeCaliperPaintColor(Int unk, Int color);

            /** \brief Will always return 1. */
            Int getWingPaintColorCount();

            /** \brief Gets the wing's paint color.
            \param unk Must always be 0. */
            Int getWingPaintColor(Int unk);

            /** \brief Sets the wing's paint color.
            \param unk Must always be 0. */
            Int setWingPaintColor(Int unk, Int color);

            /** \brief Getter-only. */
            Int control_type;

            /** \brief Unknown. 
            \details Must be 0 or 1 */
            Int target;

            /** \brief Unknown. 
            \details Internally stored as 6 bits, so 0-63. */
            Int team_id;

            /** \brief Unknown. 
            \details Internally stored as 6 bits, so 0-63.*/
            Int race_class_id;

            /** \brief Prepares the car parameter for fetching or getting some information. */
            void beginInfo();

            void endInfo();

            /** \brief
            \details Call beginInfo() before! 
            \returns An array where 
            - [0] = PS (Float) 
            - [1] = PS RPM (Int)
            */
            Array getPower();

            /** \brief Gets a power string with a localized unit i.e "789 BHP" 
            \param with_rpm If provided, will also show rpm - i.e "938 BHP/7,500 rpm"
            \details WILL call SpecDB.
            Will return "--- <unit>" if the car's real spec is hidden.
            Call beginInfo() before! */
            String getPowerString(Bool with_rpm = false);

            /** \brief Gets the car's torque.
            \returns An array where 
            - [0] = Torque in kpfm (Float) 
            - [1] = Torque RPM (?) (Int)
            \details Call beginInfo() before! */
            Int getTorque();

            /** \brief Gets a weight string with a localized unit i.e "95 kgfm"
            \details WILL call SpecDB.
            Will return "--- <unit>" if the car's real spec is hidden.
            Call beginInfo() before! */
            String getTorqueString(Bool with_rpm = false);

            /** \brief Gets the car's weight in kilograms.
            \details Call beginInfo() before! */
            Int getWeight();

            /** \brief Gets a weight string with a localized unit i.e "900 kg" 
            \details WILL call SpecDB.
            Will return "--- <unit>" if the car's real spec is hidden.
            Call beginInfo() before! */
            String getWeightString();

            /** \brief Gets the car's length in millimeters.
            \details Call beginInfo() before! */
            Int getLength();

            /** \brief Gets a length string with a localized unit i.e "4,800 mm" 
            \details WILL call SpecDB.
            Will return "--- <unit>" if the car's real spec is hidden.
            Call beginInfo() before! */
            String getLengthString();

            /** \brief Gets the fuel tank size. */
            Int getFuelTankSize();

            /** \brief Gets power to weight ratio.
            Call beginInfo() before! */
            Float getPWR();

            Int quicktune_power;
            Int quicktune_weight;
            Int quicktune_maxspeed;
            Int quicktune_tcs;
            Int quicktune_chassis_performance;

            /** \brief Sets specific part for a type.
            \details beginInfo() should be called just incase
            \returns Whether it was applied. */
            Bool setParts(CarPartsType part_type, Int part_id);

            /** \brief Gets specific part for a type. */
            Int getParts(CarPartsType part_type);

            /** \brief Gets fitted tires. 
            \returns 
            - [0] = Front (Int)
            - [1] = Rear (Int)
            */
            Array<PARTS_TIRE> getTireCategory();

            /** \brief Sets front tire (FRONTTIRE). 
            \return Result */
            Int setFrontTireCategory(Int category);

            /** \brief Sets rear tire (REARTIRE). 
            \returns Result */
            Int setRearTireCategory(PARTS_TIRE category);

            /** \brief Checks if a tire category is on. 
            \details Checks against FRONTTIRE only*/
            Bool hasTireCategory(PARTS_TIRE category);

            /** \brief Sets suitable tires based on the provided course 
            \details WILL call SpecDB */
            Bool setSuitableTires(UInt course_code, Bool rain_tire = false);

            /** \brief Sets suitable tires based on the provided course (trunk version)
            \details WILL call SpecDB */
            Bool setSuitableTiresWithTrunk(String course_label, Bool rain_tire = false);

            /** \brief Unknown.
            \details WILL call SpecDB */
            Bool setTarmacTiresWithTrunk();


            /** \brief Unknown.
            \details WILL call SpecDB */
            Int getCarPartsCount(CarPartsType type);

            /** \brief Unknown.
            \details WILL call SpecDB */
            Bool isExistPartsType(CarPartsType type);

            /** \brief Unknown.
            \details WILL call SpecDB */
            Bool isExistParts(CarPartsType type, Int category);

            /** \brief Returns whether default parts is fitted for a provided CarPartsType. */
            Bool hasDefaultParts(CarPartsType type);

            /** \brief Unknown. */
            Int isTargetLocal();

            /** \brief Unknown.
            \details Can be set with entry_base->proxy_driver_model from XML GameParameters. 
            May be used to set the driver model? GT5 has it set to 6 for vettel events. */
            Int special_driver;

            /** \brief Checks if the car has a continuously variable transmission.
            \details WILL check SpecDB. Checks against GEAR->geartype. */
            Bool isCVT();

            /** \brief Checks if the car is automatic transmission only. 
            \details WILL check SpecDB. Checks against GEAR->geartype. */
            Bool isATOnly();

            /** \brief Gets the drivetrain type.
            \details WILL check SpecDB. Checks against DRIVETRAIN->drivetype. */
            UInt getDriveTrainType();

            /** \brief Gets the car's PP as Float.
            \returns As a float - 688PP = 0.688.
            \details Call beginInfo() before! */
            Float getPerformanceIndex();

            /** \brief Gets the car's PP as Float with tire bonus included.
            \details Call beginInfo() before! */
            Float getGTPerformanceIndexWithTire();

            /** \brief Gets the car's PP as Float.
            \returns As a float - 688PP = 0.688.
            \details Call beginInfo() before! */
            Float getPP();

            /** \brief Gets the car's PP as Float with tire bonus included.
            \details Call beginInfo() before! */
            Float getPPWithTire();

            /** \brief Gets the car's PP as int.
            \returns As an Int.
            \details Call beginInfo() before! */
            Int getPP();

            /** \brief Gets the car's PP with tire bonus included.
            \returns As an Int.
            \details Call beginInfo() before! */
            Int getPPWithTire1000();

            UInt odometer;
            Float engine_life;
            Float oil_life;
            Float dirtiness;
            Int dirtiness100;
            Float body_life;
            Bool everlasting;
            Float rainX;
            Float body_coating;

            /** \brief Resets all condition based values, as if it was a brand new car.*/
            void setNewCar();

            /** \brief Resets oil value. */
            void setReplaceOil();

            /** \brief Returns whether oil was recently replaced. */
            Bool isOilJustReplaced();

            /** \brief Copies all accumulated (car condition - oil etc) status from the specified car parameter. */
            void copyAccumulatedStatus(MCarParameter src);

            /** \brief Clears wheel based dirtiness */
            void clearWheelDirt();

            /** \brief Clears dirt altogether */
            void clearDirt();

            /** \brief Clear scratches */
            void clearScratch();

            /** \brief Unknown. */
            void setConstDirt(Float front_maybe, Float rear_maybe, Float unk, Float dirtiness);

            /** \brief Unknown. */
            void setConstScratch(Float unk);

            /** \brief Unknown. */
            Float getDirtinessIndex();

            /** \brief Unknown. */
            Float getScratchIndex();

            /** \brief Unknown. */
            Float getDirtinessIndex();

            /** \brief Sets odometer value. */
            Int setOdometerForDebug(Int km);

            UInt special_gas_ratio100;

            UInt special_gas_liter;

            UInt nos_ratio100;

            UInt nos_duration_sec;

            UInt gasoline_liter;

            UInt battery;

            /** \brief Win count with this car. */
            Int win_count;

            /** \brief Garage ID (for the garage file) for this car. */
            UInt garage_id;

            /** \brief Getter-only. Whether this car is being rented (GT5 feature). */
            Bool rentacar;

            /** \brief Getter-only. Date when this car was obtained. */
            MTime obtain_date;

            /** \brief Gets the sound ID for this car.
            \details Depends on MUFFLER and/or TURBINEKIT in SpecDB */
            Int getSoundID();

            /** \brief Horn ID. */
            Int horn_sound_id;

            /** \brief Sticker type. */
            Int decken_type;

            /** \brief Sticker number. */
            Int sticker_number;

            /** \brief Sticker custom type. */
            Int sticker_custom_type;

            /** \brief Sticker custom ID. */
            ULong sticker_custom_id;

            /** \brief Unknown. */
            Array<ULong> getDeckenCustomIdList(Int custom_type);

            UInt window_sticker_custom_type;
            ULong window_sticker_custom_id;
            Array<ULong> getWindowStickerCustomIdList();

            /** \brief Returns whether a part is purchased. */
            Bool ownParts(CarPartsType parts_type, Int parts_index);

            /** \brief Returns whether a part is fitted. */
            Bool isHavingParts(CarPartsType parts_type, Int parts_index);

            /** \brief Returns a part is allowed to be fitted on the current car. 
            \details Also checks whether the part is purchased. */
            Bool isAllowedParts(CarPartsType parts_type, Int parts_index);

            /** \brief Unlocks all "arcade parts" for the current car.
            \details Sets all tires as purchased, */
            void ownArcadePartsAll();

            Bool getHavingTireList(CourseCondition condition = 4, PARTS_TIRE front = -1, PARTS_TIRE rear = -1);
            
            /** \brief Sets all available parts as purchased for this car. */
            void ownPartsAll();

            /** \brief Gets RACINGMODIFY->NewCarCode.
            \returns This will return nothing if it's not set (void), or UInt code if set */
            UInt getRacingModifyCode();

            /** \brief Applies a racing modification.
            \details Will clear most parameters & purchased parts! */
            void applyRacingModify(Int code);

            /** \brief Gets aspiration type.
            \details WILL use SpecDB.
            Hardcoded to return AspirationType::OTHER for chaparral_vision_gt_14 (Code: 2107)
            Otherwise depends on fields at ENGINE, TURBINEKIT, SUPERCHARGER in SpecDB */
            AspirationType getAspirationType();

            /** \brief Gets aspiration type. No different than getAspirationType()
            \details WILL use SpecDB.
            Hardcoded to return AspirationType::OTHER for chaparral_vision_gt_14 (Code: 2107)
            Otherwise depends on fields at ENGINE, TURBINEKIT, SUPERCHARGER in SpecDB */
            AspirationType getCurrentAspirationType();

            /** \brief Returns whether the car uses a turbo.
            \brief WILL use SpecDB. Depends on TURBINEKIT in SpecDB */
            Bool isTurbo();

            /** \brief Returns whether the car uses a supercharger.
            \brief WILL use SpecDB. Depends on TURBINEKIT in SpecDB */
            Bool isSuperCharger();

            /** \brief Gets the front weight percentage.*/
            Int getFrontWeightPercentage();

            /** \brief Checks if the car is tuned.
            \details ANY differences between parts IDs and DEFAULT_PARTS in SpecDB will trigger the car as tuned.
            Tires are excluded. 
            \param check_quicksettings Not sure on this one. Could also be resetting the car if it's tuned */
            Bool isTuned(Bool check_quicksettings = false);

            Bool wingCustomized;
            Int wingFlapType;
            Int wingEndPlateYype;
            Int wingMountYype;
            Int wingStayType;

            /** \brief Wing Width offset.
            \details Internal value * 0.001 */
            Float wingWidthOffset;

            /** \brief Wing Height offset.
            \details Internal value * 0.001 */
            Float wingHeightOffset;
            Int wingAngleOffset;


            /** \brief Unknown.
            \code
            void FUN_00592110(MCarSettings *this,int unk1,int unk2,int unk3)
            {
              float fVar1;
            
              fVar1 = 0.0;
              if ((float)(longlong)(unk3 - unk2) != 0.0) {
                fVar1 = ((float)(longlong)unk1 - (float)(longlong)unk2) / (float)(longlong)(unk3 - unk2);
              }
              this->wingAngleOffset = (short)(int)(((fVar1 * 10.0) / 360.0) * 65536.0);
            }
            \endcode */
            void setWingAngleOffsetFromRearCL(Int unk, Int unk2, Int unk3);

            /** \brief Extra interior meters count.
            \details 2 bits, 0-3 max. */
            Int extraMeterCount;

            /** \brief Gets interior meter kind. 
            \param index 2 bits, 0-3 max. */
            Int getExtraMeterKind(Int index);

            /** \brief Sets interior meter kind. 
            \param index 2 bits, 0-3 max. 
            \param kind 10 bits, 0-1023 max. */
            void setExtraMeterKind(Int index, Int kind);

            /** \brief Interior meter backlight colors. 
            \returns Array of 3 floats for each color - R, G, B*/
            Array<Float> extraMeterBacklightColor;

            /** \brief Returns whether this car parameter is equal to another. 
            \details Everything is just memcmp'd. */
            Bool isEqual(MCarParameter other);

            /** \brief Checks if the car specs are hidden from the user. 
            \details Depends on GENERIC_CAR->RealSpecHidden in SpecDB. */
            Bool real_spec_hidden;

            /** \brief Dumps all parameter contents. Debug build only. */
            String dump();

            void setupAvailableTiresInRace(Int tireUnk1, Int tireUnk2, Int tireUnk3, Int tireUnk4
                Int tireUnk5, Int tireUnk6, Int tireUnk7, Int tireUnk8);

            Array<PARTS_TIRE> setAllTiresAvailable(Bool front);

            void checkIfEquippedPartsOwnedAndOwnIt();

            /** \brief Gets a blob with all gear ratio data
            \details Call beginInfo() before! */
            MBlob buildGearRatioData();

            /** \brief Generates engine data
            \details Call beginInfo() before! 
            \returns Array containing:
            - [0] - Data (MBlob)
            - [1] - Unk (Float)
            - [2] - Unk (Float)
            - [3] - Unk (Float)
            - [4] - Unk (Float)
            - [5] - Unk (Float)
            - [6] - Unk (Float)*/
            Array buildEngineData(Bool unk, Float unk2 = 1000.0, Float unk3 = 200.0, Float unk4 = 1.0, Float unk5 = 1.0);

            /** \brief Gets gear ratio info
            \details Call beginInfo() before! 
            \returns
            - [0] - Shift Number (Int)
            - [1] - End Speed (Array<Int>, 11 elements)
            - [2] - Start RPM (Array<Int>, 11 elements)
            - [3] - End RPM (Array<Int>, 11 elements) */
            Array getGearRatioInfo();

            /** \brief Checks whether this car parameter settings (or everything?) is equal to another 
            \details Still seems to memcmp everything */
            Int equalSettings(MCarParameter param);

            /** \brief Unknown.
            \returns rangeMin, rangeMax */
            Array getGearRatioTuningRange(Int gear_nshift, Array gear_list);

            /** \brief BRAKE from SpecDB. */
            UInt brake;

            /** \brief BRAKECONTROLLER from SpecDB. */
            UInt brakeController;

            /** \brief CHASSIS from SpecDB. */
            UInt chassis;

            /** \brief ENGINE from SpecDB. */
            UInt engine;

            /** \brief DRIVETRAIN from SpecDB. */
            UInt drivetrain;

            /** \brief GEAR from SpecDB. */
            UInt gear;

            /** \brief SUSPENSION from SpecDB. */
            UInt suspension;

            /** \brief LSD from SpecDB. */
            UInt LSD;

            /** \brief ASCC from SpecDB. */
            UInt ASCC;

            /** \brief TCSC from SpecDB. */
            UInt TCSC;

            /** \brief WING from SpecDB. */
            UInt wing;

            /** \brief NOS from SpecDB. */
            UInt NOS;

            Int powerModifyRatio;
            Int weightModifyRatio;

            Int FrontRideheight;
            Int RearRideheight;
            Int FrontSpringRate;
            Int RearSpringRate;
            Int FrontDamperF1B;
            Int FrontDamperF2B;
            Int FrontDamperF1R;
            Int FrontDamperF2R;
            Int RearDamperF1B;
            Int RearDamperF2B;
            Int RearDamperF1R;
            Int RearDamperF2R;
            Int FrontToe;
            Int RearToe;
            Int FrontCamber;
            Int RearCamber;
            Int Param4WD;
            Int FrontABS;
            Int RearABS;
            Int FrontCl;
            Int RearCl;
            Int GearReverse;
            Int Gear1st;
            Int Gear2nd;
            Int Gear3rd;
            Int Gear4th;
            Int Gear5th;
            Int Gear6th;
            Int Gear7th;
            Int Gear8th;
            Int Gear9th;
            Int Gear10th;
            Int Gear11th;
            Int FinalGearRatio;
            Int GearLastFinal;
            SettingDefault FrontBrakeBalanceLevel;
            SettingDefault RearBrakeBalanceLevel;
            SettingDefault ABSCorneringControlLevel;
            Int FrontStabilizer;
            Int RearStabilizer;
            Int FrontLSDParam;
            Int RearLSDParam;
            Int FrontLSDParam2;
            Int RearLSDParam2;
            Int FrontLSDParam3;
            Int RearLSDParam3;
            Int ballastWeight;
            Int ballastPosition;
            Int MaxSpeed_10;
            Int restrictorPermill;
            Int nosTorqueVolume;
    }
}