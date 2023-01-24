using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Event/Race Organizer. */
	class MOrganizer : public Object
	{
		public:
			/** \brief constructor taking no param */
			MOrganizer() { };

			/** \brief Initializes the organizer. */
			void initialize();

			/** \brief Finalizes the organizer. */
			void finalize();
			
			void leaveEntry(Int slot_id, Bool unk = false);
			void requestTeamLeader(Int unk);
			Bool checkTeamLeader(Int unk);
			void setTeamID(Int unk, ULong id = -1);
			ULong getTeamID(Int unk);
			ULong getTeamPoint(ULong unk);
			void setBoobyPoint(UShort unk);
			UShort getBoobyPoint();
			void clearAllPoint();

			/** \brief Gets the driver parameter index that is currently driving for the specified slot id. */
			Int getRidingDriverIndex(Int slot_id);

			/** \brief Sets the driver parameter index that is currently driving for the specified slot id. */
			void setRidingDriverIndex(Int slot_id, Int driver_idx);

			void setStartDriverIndex(Int slot_id, Int unk2);
			Int getRidingSlotID(Int slot_id);
			Bool checkEnabledDrive(Int unk);
			Int getDrivingSlotID(Int unk);
			Bool getRideSlotCheck(Int slot_id, Int my_slot_id);
			void dropRequest(Int myslot, Int cslot, Bool to_leave = true);
			void dropOtherDriver(Int unk, Int unk2);
			void toPitStop(Int unk);
			void enableSingleOnlineRace();

			/** \brief Used for GT5 Rally. */
			void setAccumulationTime(Int time_ms, Bool unk2);
			Int getAccumulationTime(Int unk_index);

			/** \brief Used for GT5 Rally. Usage unknown. */
			Int getSlowestTimeInRace();

			/** \brief Resets a car in the race using VCoord and angle.
			\param unk4 May not be used
			\returns Always 0 */
			Int replaceVehicle(Int slot_id, Float angle_rad = 0.0, Float vcoord = -1.0, Bool unk4 = false);

			/** \brief Resets a car in the race using angle and position.
			\returns Always 0*/
			Int replaceVehicleByPosition(Int slot_id, Float angle_rad = 0.0, Float x = 0.0, Float y = 0.0, Float z = 0.0);

			/** \brief Removes or adds all the cars from the race except the current target car. */
			void ostracizeRaceNoTarget(Bool switch);

			/** \brief Returns the ground position for a slot id. May be starting position, does not consistently update.
			\returns [X, Y, Z, ?, ?, ?]*/
			Array<Float> getSlotGroundPosition(Int slot_id, Float unkoffset, Float unkoffset2);

			/** \brief Sets the pit id for a slot id. Intended for use with gtengine::StartType::PIT.
			\details Used in GT5 School project. */
			void setPitID(Int slot_id, Int pit_id);

			void setPitBoxRotation(Int unk);

			/** \brief Returns whether a slot_id is "completed", it is ready and currently in the race. */
			Bool isCompleteSlot(Int slot_id);

			/** \brief Unknown. Used in GT5 School. */
			void changeSpecialDriver(Int slot_id, Int special_driver);

			/** \brief Stubbed. */
			void setEnableExportLiveTiming(Bool unk);

			/** \brief Tells the event signaler to wait before starting. Setting to true will wait for the race to start until untoggled. */
			Bool setEventSignalWait(Bool wait);
			
			void setWait0EntryEvent(Bool value);
			void openLoadingCourseDoneEvent(MRenderContext context, MWidget widget);

			/** \brief Whether the event signaler is waiting. See setEventSignalWait(). */
			Bool isEventSignalWait();

			/** \brief Resets the race's weather. This can be run during a race.
			\param keep_daytime Whether to keep the current time of day
			\param new_rp New race parameter with the new weather settings */
			void resetWeather(Bool keep_time_of_day, MRaceParameter new_rp = nil);

			/** \brief Gets the odometer for each driver of a slot id. 
			\returns Array of 4 floats, one mileage per driver */
			Array<Float> getSplitTripByDrivers(Int slot_id);

			/** \brief Gets the current trip meter/mileage in meters for the specified slot_id */
			Float getTripMeterInSession(Int slot_id);

			/** \brief Gets the slot id that won the race.
			\returns -1 if no winner yet */
			Int getWinnerSlotID();

			void rideRequestOtherSlot(Int unk, Int unk2, MCarDriverParameter unk3);
			void answerRideRequestOtherSlot(Int unk, Int unk2, Bool unk3);
			void setRejectRideRequestMode(Bool value);

			/** \brief Gets the time in milliseconds until a car/slot_id starts the race. */
			Int getRemainMSecToStart(Int slot_id);

			/** \brief Gets the time in milliseconds until the race ends. 
			\returns -1 if no set time. */
			Int getRemainMSecToFinish();
			ULong getRaceStartTime();

			/** \brief Gets the display remaining time for the race. */
			Int getDisplayRemainTimeSecond(Bool unk);

			Bool checkFinishRace(Long ms = 0);

			/** \brief Gets the account/driver parameter id for a slot id. */
			Int getAccountID(Int slot_id);

			Int getResourceID(Int unk);

			/** \brief Allows new entries to enter the race. */
			void openEntryRacer();

			/** \brief Disallows entries to enter the race. */
			void closeEntryRacer();

			/** \brief Returns whether new entries can enter the race. */
			Bool canEntryRacer();
			void entryProcessLock(Int unk);
			void entryProcessUnlock(Int unk);

			/** \brief Sets a car to enter the race. Returns whether successful. */
			Bool entryRace(Int slot_id, MCarParameter cp = nil);

			/** \brief Sets a car to enter the race (async). Returns whether successful. */
			Bool entryRaceAsync(Int slot_id, MCarParameter cp = nil);

			/** \brief Sets a car/slot_id to leave the race. */
			MCarParameter leaveRace(Int slot_id, Bool unk2 = false);

			/** \brief Sets all cars to leave the race. Use this carefully, may crash. */
			void leaveRaceRequestAll();

			/** \brief Returns the entry state of a slot id/car. */
			EntryLevel getEntryState(Int slot_id);

			/** \brief Returns the running state of a slot id/car. */
			RunningState getRunningState(Int slot_id);

			/** \brief Returns energy type flags for a slot id/car. */
			UInt getHasEnergyType(Int slot_id);

			/** \brief Starts race loop. (?). */
			void startGameObjectLoop();

			/** \brief Stops the race loop (?). */
			void stopGameObjectLoop();

			void syncGameObjectLoop();
			void connectRenderingRace();
			void disconnectRenderingRace();

			/** \brief Whether the race is being rendered. */
			Bool isEnableRenderingRace();

			/** \brief Enables rendering the race. */
			void enableRenderingRace();

			/** \brief Disables rendering the race. (Black screen) */
			void disableRenderingRace();

			/** \brief Enables race sounds.*/
			void enableSoundingRace();

			/** \brief Disables race sounds. */
			void disableSoundingRace();

			/** \brief Sets the current camera. 
			\param type Camera type.
			\param window_id_maybe Not sure. More than 1 crashes. */
			void setCamera(CameraType type, Int window_id_maybe = 0);

			/** \brief Sets the current camera with the specified mount. 
			\param type Camera type.
			\param mount Camera mounting type.
			\param window_id_maybe Not sure. More than 1 crashes. */
			void setCameraWithMount(CameraType type, Int mount, Int window_id_maybe = 0);

			/** \brief Sets the current spectator camera with the specified mount. 
			\param type Camera type.
			\param mount Camera mounting type.
			\param window_id_maybe Not sure. More than 1 crashes. */
			void changeSpectatorCamera(CameraType type, Int mount, Int window_id_maybe = 0);

			/** \brief Stubbed. */
			void setForceCamera();

			/** \brief Resets camera. Will set camera to ONBOARD and set target to the first slot id/car. */
			void resetForceCamera();

			/** \brief Gets photo mode camera parameters.
			\returns Map with elements
			- "fovy" - (Float)
			- "mm" - (Float)
			- "f_value" - (Int)
			- "target_length" - (Int)
			- "shutter_speed" - (Int)
			- "exposure_correct" - (Int)
			- "frame_height" - (Int)
			- "value_mode" - (Int)
			- "req_composition_change" - (Int)
			- "selectable_num" - (Int)
			- "walk_pos_x" - (Int)
			- "walk_pos_y" - (Int)
			- "walk_pos_z" - (Int)
			*/
			Map getCameraParameters();

			/** \brief Stubbed. */
			void setForceReplayCameraSet();

			/** \brief Stubbed. */
			void setForceInCarModel();

			/** \brief Stubbed. */
			void setForceAllVisionList();

			/** \brief Copies a driver parameter to the specified slot_id's pilot/driver id. */
			void copyDriverParameter(Int slot_id, Int pilot_id, MCarDriverParameter dp, Bool unk4 = false);

			/** \returns Always 0 */
			Int setDataSynchronizeAtStart(Bool unk);

			/** \returns Struct with attributes:
			- "front_tire" - Byte
			- "rear_tire" - Byte 
			- "driver_index" - Byte
			- "charge_nos" - Byte
			- "amount_of_petrol" - Byte 
			- "next_mileage" - Int
			- "front_df" - Short
			- "rear_df" - Short
			- "fuel_type" - Byte
			- "target_time" - Short
			- "fuel_tank_size" - UByte
			- "fuel_amount" - UByte
			- "force_use_tire" - UInt
			\returns Always 1 */
			STStructure getCurrentPitStrategy(Int slot_id, Bool unk2 = false);

			/** 
			\param slot_id Slot ID.
			\param pit_strategy Struct with attributes:
			- "front_tire" - Byte
			- "rear_tire" - Byte 
			- "front_df" - Short
			- "rear_df" - Short
			- "driver_index" - Byte
			- "amount_of_petrol" - Int 
			- "next_mileage" - Int
			- "target_time" - Int
			- "charge_nos" - Byte
			- "fuel_type" - Byte
			- "force_use_tire" - UInt
			\returns Always 1 */
			Int startVehiclePitWork(Int slot_id, STStructure pit_strategy);

			void startVehicleInSession(Int slot_id);
			void releasePitVehicle(Int slot_id);
			Bool setPitMode(Int slot_id, Bool autocruise, Bool do_pit_stop);
			void setReadyEntry(Int slot_id, Bool unk);
			void setWithoutRace(Int unk, Bool unk);
			Bool getWithoutRace(Int unk);
			void toCruiseMode(Int unk, Bool unk2 = false, Int unk3 = 80);
			void needPitStrategyConfirm(Bool value);
			void confirmPitStrategySlot(Int unk);

			/** \brief Enables suspending the race for the provided slot id/car. */
			void enableSuspendRace(Int slot_id);

			/** \brief Gets race suspended data as a blob. */
			MBlob getRaceSuspendData();

			/** \brief Resumes the race with the specified suspend data. */
			void requestResumeRace(MBlob suspend_data);

			/** \brief Returns whether suspending the race is enabled (for endurance).*/
			Bool isEnabledSuspendRace();

			/** \brief Returns whether the race has resumed (after requestResumeRace().)*/
			Bool isResumedRace();
			Bool isResumedBuild();
			void clearResumedBuild();
			Bool checkResumeBuffer(MBlob race_snapshot);
			void resumeCourseInfo(MBlob unk);
			void setSequentialLoadMode(Bool unk);
			void enableUpdateManagement(Bool unk);
			void notrecordBestLapTime();
			void setUseAutoInCarReplay(Bool value);
			void noDispVehicleFlag(Bool unk);

			/** \brief Whether to disable the back mirror. Only for bumper view. */
			void noDispBackMirror(Bool disabled);

			/** \brief Always returns const 0 in release mode at least. */
			void getOverRideMipMapLv();

			/** \brief Stubbed in release mode.*/
			void setOverRideMipMapLv();

			/** \brief Gets the current camera type for a window id. */
			CameraType getCameraType(Int window_id = 0);

			/** \brief Gets the current spectator camera type. */
			CameraType getSpectatorCameraType();

			/** \brief Gets the current camera type for a window id. */
			CameraType getCurrentCameraType(Int window_id);

			/** \brief Gets the current camera mount number for a window id. */
			Int getCameraMountNum(Int window_id = 0);

			/** \brief Gets the target slot id/car of the camera for the specified window id. */
			Int getCameraTarget(Int window_id);

			/** \brief Sets the camera target to the specific slot id/car for a specified window id. */
			void setCameraTarget(Int window_id, Int slot_id);

			/** \brief Sets the camera's target vcoord. Camera type must be gtengine::CameraType::COURSEV. */
			void setCameraTargetV(Int vcoord);

			/** \brief Sets the camera's target by position. */
			void setCameraTargetVbyPos(Array<Float> pos_XYZ);

			/** \brief Initializes camera mode.
			\param unk2 Enables camera logo on the right side. */
			void initializeCameraMode(Bool unk, Bool unk2, Bool unk3);

			/** \brief Changes the current camera mount view (in replay mode). */
			void callDriversViewChange();

			/** \brief Programatically presses the camera view change button. Param is unknown. */
			void commandCameraButton(Int unk);
			
			/** \brief Whether the camera is open to inputs. Intended for use with camera types that allow movement, i.e gtengine::CameraType::WALK. */
			void setCameraInputEnable(Int enable);

			/** \brief Sets items to disable rendering on the camera. */
			void setDisableCameraDrawFlag(CameraDrawFlag flag);

			/** \brief Sets whether to disable changing cameras. Won't apply until race restart. */
			void setDisableSelectCamera(Bool disable);
			void setInCarCameraPlay();

			/** \brief Sets whether to disable selecting a target. */
			void setDisableSelectTarget(Int bool_int);
			void setBSpecCameraTable();
			void setLicenseCameraTable(Int unk);
			Bool isLicenseCameraTable();
			Bool isPreviewCameraInSpectator();

			/** \brief Resets the spectator camera. */
			void resetSpectatorCamera();

			/** \brief Gets whether the current target car is pitting. */
			Bool isTargetCarPitIn();
			void isValidCameraTarget(Int unk_maybeunused = 0);

			/** \returns Always -1 */
			Int getTargetCarDistributeCameraNum();

			/** \brief Disables any camera tracking update. */
			void setCameraDisableUpdateFlag(Bool unk);

			/** \brief Gets the selected onboard camera index for the specified window id. */
			Int getSelectedOnboardCamera(Int window_id = 0);
			void setEnableFullSelectCamera(Bool unk);
			void setOnboardEffect(Bool unk);

			/** \brief Gets the number of times a slot id/car has pitted in the race. */
			Int getNumberOfPitIn(Int slot_id);

			/** \brief Gets the car status for a slot id/car. 
			\returns May return void aswell */
			MCarStatus getCarStatus(Int slot_id);

			/** \brief Gets the gas consumption of all the cars in the race. */
			Float getAllCarGasConsumption();

			/** \brief Returns whether a slot id/car is currently pitting. */
			Int checkSlotPitInStatus(Int slot_id);
			void is_camera_subjective;
			void disp_meter;
			void is_dive_mode;
			void is_force_autoreplay_camera;
			void window_max;
			void race_display_window_num;
			void racers_num;
			void racers_num_without_ghost;
			void entries_num;

			/** \brief Whether to force 30 frames per second. */
			Int force30fps_mode;

			void dual_view_mode;
			void simul_view_mode;

			/** \brief Returns whether a specific mount is valid for the specified slot id/car. */
			Bool checkMountNum(Int slot_id, Int mount);

			/** \brief Binds a controller port to a window id. */
			void setCameraWindowControllerPort(Int window_id, Int port);

			void setCarCameraMotion(String ebc_file_name);
			void setCarCameraMotionNoiseType(Int unused);

			/** \brief Sets the walking camera mount. Intended for photo mode. */
			void setWalkCameraMount(Int unk);
			void clearCarCameraMotion();
			void setWorldCameraMotion(String ebc_file_name);
			void clearWorldCameraMotion();

			/** \brief Gets the camera subject position as vector XYZ. */
			Array<Float> getCameraSubjectPosition();

			/** \brief Gets the camera subject quaternion. */
			Array<Float> getCameraSubjectQuaternion();

			/** \brief Gets whether the race render is ready. */
			Bool isRenderReady();

			/** \brief Gets the trip mileage for a car in kilometers. */
			Float getVehicleTripKm(Int slot_id, Int unk2 = -1);

			/** \brief Number of vehicles that probably have a resource */
			Int getNbProbablyHaveResourceVehicles();
			Int checkHasNotResourceVehicle(Int unk);

			/** \brief Forces finishes a race for a slot id/car. */
			void forceFinishRace(Int slot_id, Int finish_rank);
			Int getForceFinishResult();

			/** \brief Enables or disables collision with other cars. Does not put cars in a ghost state. */
			void setCollisionEnable(Bool enabled);

			/** \brief Disables all wall collisions. */
			void setWallCollisionEnable(Bool enabled);

			/** \brief Returns whether building the race is complete. */
			Bool isBuildComplete();
			Bool checkBadTiming();
			Bool waitOtherEntries(Int unk);
			Bool waitRegularRacers(Int unk);
			Bool waitForNoRacers(Int unk);
			void loadingCourseSpeculation(ULong unk);
			void requestLoadingCourse();
			Bool isCourseLoadForDataLogger();

			/** \brief Sets the loading background image.
			\param path_to_image Normally a path to "piece/loading_bg/<label>.img" */
			void setLoadingImageFile(String path_to_image);

			Bool hasLoadingCarDone();
			Int getLoadedCarCount();
			void canEnterCourse(Bool unk = false);
			Bool enterCourse();

			/** \brief Exits the course. */
			void exitCourse();
			Bool inCourse();
			Bool inCourseAllEntries();
			Bool checkLeaveRace(Int slot_id);
			Int checkDisqualifySlot(Int unk);
			Bool checkInCourseSlot(Int unk);

			/** \brief Gets the current DB course code. 
			\returns May not return anything */
			UInt getCurrentCourseCode();

			void setApplicationEndSessionSecond(Int unk, Bool unk2 = false);
			Int getApplicationEndSessionSecond();
			void setApplicationTimeLimitNoStopAtPause(Bool unk);
			void setNoInputLimitSecond(Int unk);
			void setNetworkStartSync();
			Bool checkReadySession();
			ULong getNetworkCourseCode();
			Bool startSession(MRaceParameter rp, Bool replay_mode = false, StartSessionCameraType camera_type = 0, Bool demo_mode = false);
			Bool checkLoadingPreSession();
			Bool startRaceRequest(Int unk = -1);
			void setLoopSessionMode();
			Bool isLoopSessionMode();
			void setReenterCourse();
			void startTrackDay();
			void finishTrackDay();

			/** \param rp Can be nil */
			void replaceNextGridWithSort(MRaceParameter rp, Int unk);
			void setMatchingComplete();
			Bool endSession();
			Bool inSession();
			Bool isFreeRun();
			Int getEntryMaxAtCurrentRace();
			ControlType getEntryControlType(Int slot_id);
			ControlType getEntryDriverControlType(Int slot_id);

			/** \brief Gets the internal entry name for the specified slot id i.e "Entry00". Use getDriverDisplayName() for display name. */
			String getEntryName(Int slot_id);

			/** \brief Gets the internal country for the specified slot id i.e "PDI". */
			String getEntryCountry(Int slot_id);
			void entryRaceRequest(Int unk);
			Int checkAcceptRaceRequest(Int unk);

			/** \brief Returns a list of slot ids currently on or will be on the grid. */
			Array<Int> getSlotIDListOnGrid();

			/** \returns May not return anything */
			Int getGhostSlotID(Int unk);

			void killAllGhosts();
			void disableLoadGhost();

			/** \brief Gets all the cars entried in the race.
			\returns Array with:
			[0] - Index (Int)
			[1] - Parameter (MCarParameter) */
			Array<Array> getEntriedCarParameters(Bool unk = false);

			/** \returns May not return anything */	
			MCarParameter getEntriedCarParameter(Int slot_id, Bool unk = false);

			void setChangeableCarParameterAtBeginningOfSession(Int unk);
			void writebackCarParameter(Int unk, Bool unk2 = false);
			void writebackCarParameterOutOfSession(Int unk, Bool unk2 = false);
			void writebackDriverParameterOutOfSession(Int unk);

			/** \returns May not return anything */	
			MCarDriverParameter getEntriedDriverParameter(Int slot_id, Int unk2 = -1);

			/** \brief Gets the display name for a specified slot id. */
			String getDriverDisplayName(Int slot_id, Int unk2 = -1);
			void setChangeableDriverParameterAtBeginningOfSession(Int slot_id, Int unk2 = -1);

			/** \brief Sets the display's driver target. */
			void setRaceDisplayTarget(Int window_id, Int slot_id);

			/** 
			\param rp Race Parameter.
			\param grid_type Can also be -1 
			\param init_course Unknown.
			\param to_race Unknown.
			\param unk2 Unknown.
			\param failure_session_maybe Unknown.
			\returns Bool int */
			Int restartNetworkRace(MRaceParameter rp, GridSortType grid_type = -1, Bool init_course = false, Bool to_race = true, Bool unk2 = false, Bool failure_session_maybe = false);
			void restartOfflineRace(MRaceParameter rp, GridSortType grid_type = -1, Bool init_course = false, Bool to_race = true, Bool unk2 = false, Bool failure_session_maybe = false);
			void possibleRestartRace(Bool unk = true);
			void setAppointment(Bool unk = true);
			void arriveAppointment();
			Bool checkAppointment();
			void setProvidePointList(Array<UShort> list = nil);
			Bool isRestartSequence();
			Bool isDestroySequence();
			Bool checkNewSessionAtRestart();
			Bool isSynchronizedSession();
			Bool canDropRace(Int unk = -1);
			void completeGenerateCourse();
			Bool isGenerateCoursePhase();
			Bool reloadCourse(MRaceParameter rp, Bool to_race, Bool generated_course_unused_maybe = false, ByteData course_param = false, 
				Bool unk2 = false, Int unk3 = 0, Bool unk4 = false, ByteData unk5 = nil);
			Bool reloadCourse(String unk, Bool to_race, Bool generated_course_unused_maybe = false, ByteData course_param = false, 
				Bool unk2 = false, Int unk3 = 0, Bool unk4 = false, ByteData unk5 = nil);
			Bool chaseReloadCourse();
			MCourseGenerateData setGenerateData(ByteData course_data);
			void issuePitMessage(PitMessageType type, Int slot_id);
			Bool getLoadStatusOtherClient(Int unk = -1);
			void setNoRunSlotGridIsRandom(Bool unk);

			/** \brief Gets the elapsed race time in milliseconds. */
			Int getElapsedRaceTime();
			Bool checkFinishRaceSignal();
			Bool checkCompleteSlotSignal();

			/** \brief Disables displaying diff time on new sectors. */
			void disableDiffTime();
			void setGridPointForEvent(Array<Int> grid_points = nil);

			/** \returns Array with results
			[0] - Index (Int)
			[1] - Database ID (Int) */
			Array addCourseGadget(String gadget_name, Array<Float> xyz, Array<Float> orientation_posture);
			void removeCourseGadget(Int id);
			void clearCourseGadget();
			void layoutCourseGadget();

			/** \brief Gets a gadget id from name from the course data's gadget structure. */
			Int getGadgetIDFromName(String name);
			Int getHitGadgetInSession();

			/** 
			\param unk2 2 floats
			\param unk3 4 floats */
			void registGameParameterGadget(Int unk, Array<Float> unk2, Array<Float> unk3);
			void clearGameParameterGadget();
			UInt minimum_hdd_capacity;

			/** \brief Gets the goal time for a slot id/car. */
			Int getGoalTime(Int slot_id);

			/** \brief Gets the fastest lap time in the race for a slot id/car. Race must have ended. */
			Int getFastestLapTime(Int slot_id);

			/** \brief Gets the display best lap in the race. */
			Int getDisplayBestLapTime(Int slot_id = -1);

			/** \brief Gets the current race laps (from the 1st's perspective)*/
			Int getCurrentRaceLaps();

			/** \brief Binds all race events to a widget (normally window aka RaceRoot). 
			\details All the events:
			- onEventGoalV
			- onRunOutReplayBuffer
			- onSectionTime
			- onLapCount
			- onUpdateBestScore
			- onTargetVehicleHitGadget
			- onDisqualify
			- onUpdateGhost
			- onUpdateGhost
			- onRestartSession
			- onFixedRanking
			- onComplete
			- onEntryRace
			- onPitWorkStart
			- onFinishRace
			- onPenaltyLimitSpeed
			- onUpdateScore
			- onStartRaceRequest 
			- onStartSession
			- onNetworkDisconnect
			- onClearCourseCaution
			- onAnnouncementViolation
			- onEmptyEntries
			- onEndSession
			- onChangedDriver
			- onOvertake
			- onNoInputLimit
			- onPenaltyDisorderly
			- onVehicleInConsideration
			- onRideRequestAnswer
			- onDropRequest
			- onVehicleTimeUpdate
			- onSubModeDirectionEvent
			- onLeaveRace
			- onPitIn
			- onStartVehicle
			- onRaiseFlag
			- onTimeLimit
			- onSpeedRecord
			- onEventV
			- onPreTimeLimit
			- onOvertakeResult
			- onThislapInvalid
			- onNextlapInvalid
			- onVehicleDetachedParts
			- onNetworkLapCount
			- onButtonEvent
			- onPlayVoice
			- onPitOut
			- onPenaltyIgnoreFlag
			- onPitStop
			- onConfirmPitStrategy
			- onPitWorkFinish
			- onTimeOverPit
			- onVehicleOverturned
			- onOvertakeRestartWait
			- onOvertakeRestart
			- onCourseOut
			- onNetworkWinnerDecideEvent
			- 
			*/
			void setEventCallback(MRenderContext context, MWidget widget);
			void setEventCallbackBackupWidget(MWidget widget);
			void clearEventCallback();

			/** \brief Gets live timing record object. */
			MLiveTimingRecord getLiveTimingRecord();

			/** \returns Array with 16 ints */
			Array<Int> getCarOrderList(Bool unk = false);
			Array<Int> getFixedCarOrderList();

			/** \returns Array with orders, each element has:
			- [0] = Slot ID/Index (Int)
			- [1] = Driver Name (String) */
			Array<Array> getCurrentOrderList();

			/** \returns Hardcoded to return 0 */
			Int getEnsuredCarOrder();
			Int getFixedCarOrder(Int slot_id);

			/** \details In seconds */
			Float sec_to_finish_all_complete;

			/** Gets the current race parameter. */
			MRaceParameter getCurrentRaceParameter();

			/** Sets the current race parameter. This works in a race. */
			void setCurrentRaceParameter(MRaceParameter rp);

			/** \brief Gets the original race parameter. When restarting the race, this parameter will be used. */
			MRaceParameter getBackRaceParameter();

			/** \brief Sets the original race parameter. This will also update the current one. */
			void setBackRaceParameter(MRaceParameter rp);

			/** \brief Gets the amount of sectors in the race. */
			Int getSectorCount();

			/** \brief Whether to enable the timer. This will not stop rendering it if false; It will disable updating it. */
			void setEnableTimer(Bool enable);
			void setOnlineEventParameter(MRaceParameter rp);

			/** \brief Stubbed in release. */
			MBlob getGeometryBufferForLoad();

			/** \brief Gets the replay header from a specified file. */
			MBlob getReplayHeaderFromPath(String replay_file_name);
			MBlob getReplayHeaderFromWorkPath();
			MBlob getReplayHeaderFromGhostPath();
			MBlob getReplayHeaderFromLoadGhostPath(String path);
			Bool checkReplayBuffer(MBlob buffer);

			/** \brief Stubbed in release. */
			void dumpReplayHeaderInfo(MBlob header);
			void prepareReplayPath(String path);

			/** \returns May not return anything */
			MBlob getPreparedReplayBuffer();
			Bool isFinishedFirstLoad();
			Bool canStartReplayWithCurrentRace();
			Bool startReplayWithCurrentRace();
			Int saveReplayToFile(String file);
			Int loadReplayFromFile(String file);
			Bool patchReplayData(ByteData data, Int unk, MCarParameter cp, Int unk2, MCarDriverParameter dp);

			/** \brief Getter-only. */
			Float replay_total_sec;

			/** \brief Getter-only. */
			Float replay_elapsed_sec;

			/** \brief Getter-only. */
			String replay_org_path;

			String replay_work_path;

			/** \brief Getter-only. */
			String replay_onelap_play_org_path;

			/** \brief Getter-only. */
			String replay_onelap_record_org_path;

			String replay_onelap_play_work_path;

			/** \brief Getter-only. */
			String replay_onelap_load_org_path;

			String replay_onelap_load_work_path;

			/** \brief Getter-only. */
			String replay_onelap_attach_org_path;

			String replay_onelap_attach_path;

			/** \brief Getter-only. */
			void replay_fulllap_ghost_path;

			Int replay_mode;

			void clearAllGhostRecord();
			String getRecordedMarkPath();
			Bool loadMarkReplay(String path, String online_id = nil, UInt mark_id, Bool unk, Bool unk2 = false);
			Bool isLoadingAnyMarkReplay();
			void unloadMarkReplay();
			Bool async_update_mark;
			Bool play_mark_with_replay;
			void setReplayRecordableSize(UInt size);
			void decideReplayTrackNum();
			void topReplayChapter();
			void backReplayChapter();
			void nextReplayChapter();
			void checkGhostFileBeforeRace();
			Bool canSeekNextChapter();
			Bool canSeekPrevChapter();
			Int getPrevChapterNum();
			Bool canSkipChapter();
			void setDisableChapterMode();

			/** \brief Gets whether the replay is being played. */
			Bool nowPlayingReplay();
			UInt getReplayNextFrame();

			/** \brief Returns the controller type for a slot id/car. */
			AutomobileControllerType getControllerType(Int slot_id);

			/** \brief Getter-only. Hardcoded to return "/APP_DATA_RAW/photo/photo.dat"*/
			String photo_org_path;

			/** \brief Getter-only. Hardcoded to return "/APP_DATA_RAW/photo/photo_t.dat"*/
			String photo_thumb_path;

			/** \brief Freezes the car if enabled*/
			Bool vehicle_visible;

			/** \brief Sets the singleton for decrypting car files */
			void setBufferDecryptManager(MBufferDecryptManager manager);

			/** \brief Sets the sound context. 
			\param context Can be nil to deinitialize */
			void setSoundContext(MSoundContext context);

			/** \brief Sets the race's race sound. */
			void setRaceSound(MRaceSound race_sound);

			/** \brief Gets the race's race sound. */
			MRaceSound getRaceSound();

			/** \brief Stubbed. */
			void enableIconCapture(Bool enabled);

			/** \brief Stubbed. Always returns false. */
			Bool isEnabledIconCapture();

			/** \brief Stubbed. */
			void captureIcon();
			void beginGpsReplay();
			void endGpsReplay();

			/** \brief Returns whether the organizer is operating on an online race. */
			Bool isOnline();
			Bool checkEnableNetwork();
			MPDINetworkUserId getHostId();

			/** \brief Getter-only. */
			Bool is_host;
			Bool driver_name_disp;

			void setSceneQualityInRaceNoInterior(Bool unk);
			void setSceneQualityInRaceNoCrowd(Bool unk);
			void setSceneQualityInRaceSimpleSmoke(Bool unk);

			/** \brief Stubbed. Returns -1 */
			Int getDriverDebugFlag(Int unk);

			/** \brief Stubbed. */
			void setDriverDebugFlag(Int unk, Int flag);

			/** \brief Stubbed. Returns -1 */
			Int driver_debug;

			/** \brief Stubbed. Returns 0 */
			void getCrowdDebugFlag();

			/** \brief Stubbed. */
			void setCrowdDebugFlag(Int flag);

			/** \brief Stubbed. Returns 0 */
			Int crowd_debug;

			/** \brief Gets whether the driving line for a window is enabled. */
			Bool getDrivingLineDispFlag(Int window_id);

			/** \brief Sets whether to display the driving line for a window. */
			void setDrivingLineDispFlag(Int window_id, Bool enabled);
			Int driving_line;

			/** \brief Gets whether to display the pit-in autodrive line instead of the regular line.*/
			Bool getDebugDrawPitinLine();

			/** \brief Sets whether to display the pit-in autodrive line instead of the regular line.*/
			void setDebugDrawPitinLine(Bool enabled);
			Bool debug_draw_pitinline;
			
			void setInCarFovyType(Int window_id, Int fovy_type);
			void setCautionCruise(Int unk, Bool unk2, Bool unk3 = false);
			void clearCautionCruise(Int unk);
			Bool pace_note;
			void setGenerateSuggestLine(Bool enable);
			Bool getGenerateSuggestLine();
			void setAutoAttackLineCourseDivDis(Float unk);
			void setAutoAttackLineSideOffset(Float offset);
			Bool generate_suggestline;

			/** \brief Stubbed in release. */
			void getMovieEnable();

			/** \brief Stubbed in release. */
			void setMovieEnable();

			/** \brief Stubbed in release. Typo is intended. */
			Int movie_enavle;

			/** \brief Stubbed in release. */
			Int getMovieOutput();

			/** \brief Stubbed in release. */
			void setMovieOutput();

			/** \brief Stubbed in release. */
			Int movie_output;

			/** \brief Stubbed in release. */
			Int getStartFrame();

			/** \brief Stubbed in release. */
			void setStartFrame();

			/** \brief Stubbed in release. */
			Int movie_start_frame;

			/** \brief Stubbed in release. */
			Int getEndFrame();

			/** \brief Stubbed in release. */
			void setEndFrame();

			/** \brief Stubbed in release. */
			Int movie_end_frame;

			/** \brief Stubbed in release. */
			Int getSubFrames();

			/** \brief Stubbed in release. */
			void setSubFrames();

			/** \brief Stubbed in release. */
			Int movie_sub_frame;

			/** \brief Stubbed in release. */
			Int setRateFor60fps();

			/** \brief Stubbed in release. */
			void getRateFor60fps();

			/** \brief Stubbed in release. */
			Int movie_60fps_rate;

			/** \brief Stubbed in release. */
			void setFrameDataOutput();

			/** \brief Stubbed in release. */
			void getFrameDataOutput();

			/** \brief Stubbed in release. */
			void setFramePilotDataOutput();

			/** \brief Stubbed in release. */
			void getFramePilotDataOutput();

			/** \brief Stubbed in release. */
			void setFrameDataWithParts();

			/** \brief Gets the game's current resolution parameters.
			\returns Array with resolution
			- [0] - Width (Int)
			- [1] - Height (Int)
			- [2] - is_4x3 (Bool)
			- [3] - Unk (Bool)
			*/
			Array getGameResolution();

			/** \details Use applyGameResolution() before 
			1920x1080 can be set, but breaks the game */
			void setGameResolution(Int width, Int height, Bool is_4x3 = false, Bool unk = false);
			Bool isSelectableGameResolution(Int width, Int height, Bool is_4x3 = false);
			Bool getUseParallaxView();
			void setUseParallaxView(Bool enable);
			Int getParallaxChangeMode();
			void setParallaxChangeMode(Int mode);
			Bool getEnableStereoRendering();
			void setEnableStereoRendering(Bool enable);

			/** \brief Use setGameResolution() before */
			void applyGameResolution();

			/** \brief Stubbed in release. */
			Bool applySimulView();

			/** \brief Stubbed in release. */
			void getBlur();

			/** \brief Stubbed in release. */
			void setBlur();

			/** \brief Stubbed in release. */
			Bool movie_blur;

			/** \brief Stubbed in release. */
			void getMovieStatePrint();

			/** \brief Stubbed in release. */
			void setMovieStatePrint();

			/** \brief Stubbed in release. */
			void movie_state_print;

			/** \brief Stubbed in release. */
			String getMoviePath();

			/** \brief Stubbed in release. */
			void setMoviePath(String path);

			/** \brief Stubbed in release. */
			String movie_path;

			/** \brief Stubbed in release. */
			void setMovieFormat();

			/** \brief Stubbed in release. */
			void getMovieFormat();

			/** \brief Stubbed in release. */
			void movie_format;

			/** \brief Stubbed in release. */
			void setMovieAudioOutput();

			/** \brief Stubbed in release. */
			void getMovieAudioOutput();

			/** \brief Stubbed in release. */
			void movie_audio_output;

			/** \brief Stubbed in release. */
			void setMovieDepthOutput();

			/** \brief Stubbed in release. */
			void getMovieDepthOutput();

			/** \brief Stubbed in release. */
			void movie_depth_output;

			/** \brief Stubbed in release. */
			void setMovieShutterRate();

			/** \brief Stubbed in release. */
			void getMovieShutterRate();

			/** \brief Stubbed in release. */
			void movie_shutter_rate;

			/** \brief Stubbed in release. */
			void setMovieHiQualityMode();

			/** \brief Stubbed in release. */
			void getMovieHiQualityMode();

			/** \brief Stubbed in release. */
			void movie_quality_mode;

			/** \brief Stubbed in release. */
			void speed_up_mode;

			/** \brief Always 0.0 */
			Float speed_up_rate;
			
			void setSaveSequence(Bool enabled);
			
			void pauseInSaveSequence(Bool enabled);
			Int pauseHandleAvailable;
			Int pauseAvailable;
			Int pauseRace;
			Int pauseForOnline;
			void requestPause();
			void komaOkuri();
			void stopReplayUpdate(Bool stop);
			void setUpdatePauseAsyncIndex(Int index);

			/** \brief Returns whether the organizer is executing updates. */
			Bool isExecuteUpdate();
			Bool isGettingPilotInVehicle();

			/** \brief Sets whether there is a pilot driving the vehicle. If false, car will be put to a halt. */
			void getPilotInVehicle(Int slot_id, Bool in_vehicle = true);
			Bool monitor_host;
			String monitor_host_ip;
			Bool monitor_follow_host;
			Int monitor_index;
			Int monitor_round_y;
			Float monitor_round_angle;
			Float monitor_view_angle_y;
			Float monitor_view_angle;
			Float monitor_view_angle_scale;
			Int monitor_aspect_ratio_enable;
			Float monitor_aspect_ratio;
			Float monitor_view_offset_x;
			Float monitor_convergence;
			Float monitor_frame_delay;
			Int monitor_frame_delay_enable;
			Array<Float> monitor_border;
			Bool monitor_pixel_jitter_enable;
			Bool monitor_race_display_enable;
			Int monitor_race_display_mode;
			Int gt_hifi;
			Int extra_wide;
			Int replay_recording_quality;
			Bool full_quality_replay;
			void setMonitorLayout(Int unk, Int unk2 = 1);
			void startMonitorClient();
			void endMonitorClient();
			Int getMonitorClientErrorCode();
			void onGameOptionApply();
			void execCommand(String cmd, Bool unk = true);
			void execAtUpdateThread();
			void waitTickEntry();
			Int isUnderPhotoRendering();
			Int isUnderPhotoEncoding();
			Int isUnderPhotoExitWait();
			Float getPhotoProgress();
			void exitPhotoPreview();
			Bool use_customized_window_settings;

			/** \returns 5 floats in array */
			Array<Float> customized_window_settings;

			/** \brief Gets the course's length in meters. */
			Float getCourseLength();

			/** \brief Returns whether the course is a loop/circuit, not point to point. */
			Bool isLoopCourse();

			/** \brief Gets the number of corners. Note: seems to always return -1. */
			Int getCornerNum();

			/** \brief Gets the max straight's length. */
			Float getmaxStraightLength();
			Float getVerticalInterval();

			/** \brief Gets the start line's vcoord. */
			Float getStartV();

			/** \brief Gets the goal's vcoord. */
			Float getGoalV();

			/** \details Stubbed in release. */
			void getCarsAndCourseVramSize();

			/** \details Stubbed in release. */
			void setCarsAndCourseVramSize();

			Float getCarLODSize(Array<Int> slot_ids);

			/** \brief Gets the current scene model view as a matrix for the specified window. */
			Array<Float> getLatestSceneModelView(Int unk);

			/** \details Stubbed in release. */
			Bool auto_pitstop;

			Int getAIPitDecisiton10VitalityAtRace();
			void setAIPitDecisiton10VitalityAtRace(Int value);
			Int getAIPitDecisiton10TireAtRace();
			void setAIPitDecisiton10TireAtRace(Int value);
			Bool enable_spark;
			UInt requestRaceStage(String stage);
			void isReadyRaceStage(UInt unk);
			UInt getRaceStagePhase(UInt unk);
			void startRaceStage(UInt unk, Int unk2, Float unk3 = -1.0, Float unk4 = 0.0, 
				Float unk5 = 0.0, Float unk6 = 0.0, Bool unk7 = true, Bool unk8 = true, Int unk9 = 0);
			
			/** \returns Gadget list 
			- "position" - (Array<Float>)
			- "orientation" - (Array<Float>)
			- "poslocal" - (Array<Float>)
			- "orilocal" - (Array<Float>)
			- "name" - (String)
			- "gadget_name" - (String)
			- "gid" - (Int)
			- "global" - (Bool)
			- "floationg" - (Bool) */
			Array<Map> resetRaceStage(UInt stage_data_code, Int slot_id, Int coord, Float x = 0, Float y = 0, Float z = 0, Float rotYdeg = 0.0, Float vcoord = 0.0, Bool ostracize = false, Int oclock = 0, Bool move_vehicle = false);
			void endRaceStage(UInt unk, Int unk2 = nil);
			void clearRaceStage(UInt unk);

			/** \brief Gets the current race phase. */
			StagePhaseType getRacePhase();

			/** \brief Gets the current network race phase. */
			StagePhaseType getNetworkRacePhase();

			/** \brief Removes or adds all the cars from the race. */
			void ostracizeAllCars(Bool switch);
			Bool isDebugStopFlag();

			/** \brief Gets the loading/streaming progress of the course (0.0 to 1.0). */
			Float getCourseStreamProgress();

			/** \details Stubbed in release. */
			void running_monitor;

			/** \details Stubbed in release. */
			void bspec_dev_skill_gauge;

			void beginReducedMem();
			void endReducedMem();

			/** \brief Gets the exact vehicle position for a slot id/car as vector 3 [X, Y, Z]. */
			Array<Float> getVehiclePosition(Int slot_id);
			void setRaceSubMode(Bool unk);

			/** \returns 2 elements */
			Array<RaceSubModeTypes> getRaceSubModeList();

			/** \brief Resets a vehicle. */
			void resetVehicle(Int slot_id, Int vcoord);

			/** \brief Resets a vehicle's status. */
			void resetVehicleStatus(Int slot_id);

			/** \brief Gets the race's status. */
			MRaceStatus getRace();

			/** \brief Gets the camera control status. */
			MRaceCameraStatus getCameraControl();

			/** \brief Gets the camera set status. */
			MRaceCameraSetStatus getCameraStatus(Int index);

			/** \brief Gets the race's target race entry status. NOTE: slot id must not be out of bound, or crashes. */
			MRaceEntryStatus getTargetRaceEntry(Int slot_id = 0);
			void setEffectFader(Float unk);

			/** \brief Sets a bool singleton in the engine */
			Int replay_compatible_debug;
			
			/** \param settings Settings:
			"type" - (Int)
			"warm_sec" - (Float)
			"velocity_kmh" - (Float)
			"FreqBegin" - (Float)
			"FreqEnd" - (Float)
			"Amp" - (Float)
			*/
			void startBenchTest(Map settings);
			Bool isBenchTestRunning();

			/** \returns Map with results (?)
			- "cutoff_lpf" - Float */
			Map analyseBenchTest();
			void bindInputBenchTest(MChartFace face);
			void bindOutputBenchTest(Int unk, MChartFace output_face, MChartFace spectrum_face, MChartFace phase_face);
			void bindBenchTestDummy();
			void beginBenchTestFloor(UInt stage_request_id, String unk_name);
			void endBenchTestFloor(UInt stage_request_id, String unk_name);
			void setLineGhost(Bool is_set);

			/** \brief Stubbed in release. */
			void sendDebugMessage(String message);

			/** \brief Stubbed in release. */
			void sendDebugMessage(Int unk, String message);
			void selectOptionalFunctions(Bool flags);
			Bool enableHMD;
			Bool disableDirectStatus;
			Bool getDerivedMapData();
    }
}