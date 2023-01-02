using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Event/Race Organizer. */
	class MOrganizer
	{
		public:
		
			MOrganizer();

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
			void getRidingDriverIndex(Int slot_id);
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
			void setAccumulationTime(Int unk, Bool unk2);
			Int getAccumulationTime(Int unk);
			Int getSlowestTimeInRace();
			/** \param unk4 May not be used
			\returns Always 0 */
			Int replaceVehicle(Int unk, Float unk2 = 0.0, Float target_v = -1.0, Bool unk4 = false);
			/** \returns Always 0*/
			Int replaceVehicleByPosition(Int unk, Float unk2 = 0.0, Float x = 0.0, Float y = 0.0, Float z = 0.0);
			void ostracizeRaceNoTarget(Bool unk);
			void getSlotGroundPosition(Int unk, Float unk2, Float unk3);
			void setPitID(Int unk, Int unk2);
			void setPitBoxRotation(Int unk);
			Bool isCompleteSlot(Int slot_id);
			void changeSpecialDriver(Int unk, Int unk2);

			/** \brief Stubbed. */
			void setEnableExportLiveTiming(Bool unk);

			Bool setEventSignalWait(Bool value);
			void setWait0EntryEvent(Bool value);
			void openLoadingCourseDoneEvent();
			Bool isEventSignalWait();
			/** \param unk Set to true if unk2 is not present */
			void resetWeather(Bool unk, MRaceParameter new_rp = nil);
			Array<Float> getSplitTripByDrivers(Int slot_id);
			Float getTripMeterInSession(Int unk);
			Int getWinnerSlotID();
			void rideRequestOtherSlot(Int unk, Int unk2, MCarDriverParameter unk3);
			void answerRideRequestOtherSlot(Int unk, Int unk2, Bool unk3);
			void setRejectRideRequestMode(Bool value);
			Int getRemainMSecToStart(Int unk);
			Int getRemainMSecToFinish();
			ULong getRaceStartTime();
			Int getDisplayRemainTimeSecond(Bool unk);
			Bool checkFinishRace(Long ms = 0);
			Int getAccountID(Int slot_id);
			Int getResourceID(Int unk);
			void openEntryRacer();
			void closeEntryRacer();
			Bool canEntryRacer();
			void entryProcessLock(Int unk);
			void entryProcessUnlock(Int unk);
			Bool entryRace(Int slot_id, MCarParameter cp = nil);
			Bool entryRaceAsync(Int slot_id, MCarParameter cp = nil);

			/** \brief Unknown. Return object needs figuring */
			Object leaveRace(Int slot_id, Bool unk2 = false);
			void leaveRaceRequestAll();
			Int getEntryState(Int unk);
			Int getRunningState(Int unk);
			UInt getHasEnergyType(Int unk);
			void startGameObjectLoop();
			void stopGameObjectLoop();
			void syncGameObjectLoop();
			void connectRenderingRace();
			void disconnectRenderingRace();
			Bool isEnableRenderingRace();
			void enableRenderingRace();
			void disableRenderingRace();
			void enableSoundingRace();
			void disableSoundingRace();
			void setCamera(CameraType type, Int unk = 0);
			void setCameraWithMount(CameraType type, Int mount, Int unk3 = 0);
			void changeSpectatorCamera(CameraType type, Int mount, Int unk3 = 0);

			/** \brief Stubbed. */
			void setForceCamera();
			void resetForceCamera();

			/** \returns Map with elements
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

			void copyDriverParameter(Int unk1, Int unk2, MCarDriverParameter unk3, Bool unk4 = false);

			/** \returns Always 0 */
			void setDataSynchronizeAtStart(Bool unk);

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

			/** \param pit_strategy Struct with attributes:
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
			void enableSuspendRace(Int slot_id);
			MBlob getRaceSuspendData();
			void requestResumeRace(MBlob suspend_data);
			Bool isEnabledSuspendRace();
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
			void noDispBackMirror(Bool unk);

			/** \brief Always returns const 0 in release mode at least. */
			void getOverRideMipMapLv();

			/** \brief Stubbed in release mode.*/
			void setOverRideMipMapLv();
			CameraType getCameraType(Int unk = 0);
			CameraType getSpectatorCameraType();
			CameraType getCurrentCameraType(Int unk);
			void getCameraMountNum(Int window_id = 0);
			void getCameraTarget(Int window_id);
			void setCameraTarget(Int window_id, Int slot_id);
			void setCameraTargetV(Int unk);
			void setCameraTargetVbyPos(Array<Float> pos_XYZ);
			void initializeCameraMode(Bool unk, Bool unk2, Bool unk3);
			void callDriversViewChange();
			void commandCameraButton(Int unk);
			void setCameraInputEnable(Int unk);
			void setDisableCameraDrawFlag(Int unk);
			void setDisableSelectCamera(Bool unk);
			void setInCarCameraPlay();
			void setDisableSelectTarget(Int bool_int);
			void setBSpecCameraTable();
			void setLicenseCameraTable(Int unk);
			Bool isLicenseCameraTable();
			Bool isPreviewCameraInSpectator();
			void resetSpectatorCamera();
			Bool isTargetCarPitIn();
			void isValidCameraTarget(Int unk_maybeunused = 0);

			/** \returns Always -1 */
			Int getTargetCarDistributeCameraNum();
			void setCameraDisableUpdateFlag(Bool unk);

			/** \returns Always -1 */
			Int getSelectedOnboardCamera(Int unk = 0);
			void setEnableFullSelectCamera(Bool unk);
			void setOnboardEffect(Bool unk);
			Int getNumberOfPitIn(Int unk);

			/** \returns May return void aswell */
			MCarStatus getCarStatus(Int unk);

			Float getAllCarGasConsumption();
			Int checkSlotPitInStatus(Int unk);
			void is_camera_subjective;
			void disp_meter;
			void is_dive_mode;
			void is_force_autoreplay_camera;
			void window_max;
			void race_display_window_num;
			void racers_num;
			void racers_num_without_ghost;
			void entries_num;
			void force30fps_mode;
			void dual_view_mode;
			void simul_view_mode;
			Bool checkMountNum(Int unk, Int unk2);
			void setCameraWindowControllerPort(Int unk, Int unk2);
			void setCarCameraMotion(String unk);
			void setCarCameraMotionNoiseType(Int unused);
			void setWalkCameraMount(Int unk);
			void clearCarCameraMotion();
			void setWorldCameraMotion(String unk);
			void clearWorldCameraMotion();
			Array<Float> getCameraSubjectPosition();
			Array<Float> getCameraSubjectQuaternion();
			Bool isRenderReady();
			Float getVehicleTripKm(Int unk, Int unk2 = -1);
			Int getNbProbablyHaveResourceVehicles();
			Int checkHasNotResourceVehicle(Int unk);
			void forceFinishRace(Int unk, Int unk2);
			Int getForceFinishResult();
			void setCollisionEnable(Bool unk);

			/** \brief Disables all wall collisions. */
			void setWallCollisionEnable(Bool enabled);

			Bool isBuildComplete();
			Bool checkBadTiming();
			Bool waitOtherEntries(Int unk);
			Bool waitRegularRacers(Int unk);
			Bool waitForNoRacers(Int unk);
			void loadingCourseSpeculation(ULong unk);
			void requestLoadingCourse();
			Bool isCourseLoadForDataLogger();

			/** \param path_to_image Normally a path to piece/loading_bg/<label>.img */
			void setLoadingImageFile(String path_to_image);

			Bool hasLoadingCarDone();
			Int getLoadedCarCount();
			void canEnterCourse(Bool unk = false);
			Bool enterCourse();
			void exitCourse();
			Bool inCourse();
			Bool inCourseAllEntries();
			Bool checkLeaveRace(Int slot_id);
			Int checkDisqualifySlot(Int unk);
			Bool checkInCourseSlot(Int unk);

			/** \returns May not return anything */
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
			String getEntryName(Int slot_id);
			String getEntryCountry(Int slot_id);
			void entryRaceRequest(Int unk);
			Int checkAcceptRaceRequest(Int unk);
			Array<Int> getSlotIDListOnGrid();

			/** \returns May not return anything */
			Int getGhostSlotID(Int unk);

			void killAllGhosts();
			void disableLoadGhost();

			/** \returns Array with:
			[0] - Index (Int)
			[1] - Parameter (MCarParameter) */
			Array getEntriedCarParameters(Bool unk = false);

			/** \returns May not return anything */	
			MCarParameter getEntriedCarParameter(Int slot_id, Bool unk = false);

			void setChangeableCarParameterAtBeginningOfSession(Int unk);
			void writebackCarParameter(Int unk, Bool unk2 = false);
			void writebackCarParameterOutOfSession(Int unk, Bool unk2 = false);
			void writebackDriverParameterOutOfSession(Int unk);

			/** \returns May not return anything */	
			MCarDriverParameter getEntriedDriverParameter(Int slot_id, Int unk2 = -1);
			String getDriverDisplayName(Int slot_id, Int unk2 = -1);
			void setChangeableDriverParameterAtBeginningOfSession(Int slot_id, Int unk2 = -1);
			void setRaceDisplayTarget(Int unk, Int unk2);

			/** \param grid_type Can also be -1 
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
			void issuePitMessage(Int unk, Int unk2);
			Bool getLoadStatusOtherClient(Int unk = -1);
			void setNoRunSlotGridIsRandom(Bool unk);
			Int getElapsedRaceTime();
			Bool checkFinishRaceSignal();
			Bool checkCompleteSlotSignal();
			void disableDiffTime();
			void setGridPointForEvent(Array<Int> grid_points = nil);

			/** \returns Array with results
			[0] - Int
			[1] - Int */
			Array addCourseGadget(String gadget_name, Array<Float> xyz, Array<Float> orientation_posture);
			void removeCourseGadget(Int id);
			void clearCourseGadget();
			void layoutCourseGadget();
			Int getGadgetIDFromName(String name);
			Int getHitGadgetInSession();

			/** 
			\param unk2 2 floats
			\param unk3 4 floats */
			void registGameParameterGadget(Int unk, Array<Float> unk2, Array<Float> unk3);
			void clearGameParameterGadget();
			UInt minimum_hdd_capacity;
			Int getGoalTime(Int unk);
			Int getFastestLapTime(Int unk);
			Int getDisplayBestLapTime(Int unk = -1);
			Int getCurrentRaceLaps();
			void setEventCallback(MRenderContext context, MWidget widget);
			void setEventCallbackBackupWidget(MWidget widget);
			void clearEventCallback();
			MLiveTimingRecord getLiveTimingRecord();

			/** \returns Array with 16 ints */
			Array<Int> getCarOrderList(Bool unk = false);
			Array<Int> getFixedCarOrderList();

			/** \returns Array with orders, each element has:
			- [0] = Index (Int)
			- [1] = Driver Name (String) */
			Array<Array> getCurrentOrderList();

			/** \returns Hardcoded to return 0*/
			Int getEnsuredCarOrder();
			Int getFixedCarOrder(Int unk);

			/** \details In seconds */
			Float sec_to_finish_all_complete;
			MRaceParameter getCurrentRaceParameter();
			void setCurrentRaceParameter(MRaceParameter rp);
			MRaceParameter getBackRaceParameter();
			void setBackRaceParameter(MRaceParameter rp);
			Int getSectorCount();
			void setEnableTimer(Bool enable);
			void setOnlineEventParameter(MRaceParameter rp);

			/** \brief Stubbed in release. */
			MBlob getGeometryBufferForLoad();
			MBlob getReplayHeaderFromPath(String path);
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
			Bool nowPlayingReplay();
			UInt getReplayNextFrame();
			AutomobileControllerType getControllerType(Int slot_id);

			/** \brief Getter-only. Hardcoded to return "/APP_DATA_RAW/photo/photo.dat"*/
			String photo_org_path;

			/** \brief Getter-only. Hardcoded to return "/APP_DATA_RAW/photo/photo_t.dat"*/
			String photo_thumb_path;

			/** \brief Freezes the car if enabled*/
			Bool vehicle_visible;

			/** \brief Sets the singleton for decrypting car files */
			void setBufferDecryptManager(MBufferDecryptManager manager);

			/** \param context Can be nil to deinitialize */
			void setSoundContext(MSoundContext context);
			void setRaceSound(MRaceSound race_sound);
			MRaceSound getRaceSound();

			/** \brief Stubbed. */
			void enableIconCapture(Bool enabled);

			/** \brief Stubbed. Always returns false. */
			Bool isEnabledIconCapture();

			/** \brief Stubbed. */
			void captureIcon();
			void beginGpsReplay();
			void endGpsReplay();
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

			Bool getDrivingLineDispFlag(Int window_id);
			void setDrivingLineDispFlag(Int window_id, Bool enabled);
			Int driving_line;

			Bool getDebugDrawPitinLine();
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

			/** \returns Array with resolution
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

			/** \details Use setGameResolution() before */
			void applyGameResolution();

			/** \details Stubbed in release. */
			Bool applySimulView();

			/** \details Stubbed in release. */
			void getBlur();

			/** \details Stubbed in release. */
			void setBlur();

			/** \details Stubbed in release. */
			Bool movie_blur;

			/** \details Stubbed in release. */
			void getMovieStatePrint();

			/** \details Stubbed in release. */
			void setMovieStatePrint();

			/** \details Stubbed in release. */
			void movie_state_print;

			/** \details Stubbed in release. */
			String getMoviePath();

			/** \details Stubbed in release. */
			void setMoviePath(String path);

			/** \details Stubbed in release. */
			String movie_path;

			/** \details Stubbed in release. */
			void setMovieFormat();

			/** \details Stubbed in release. */
			void getMovieFormat();

			/** \details Stubbed in release. */
			void movie_format;

			/** \details Stubbed in release. */
			void setMovieAudioOutput();

			/** \details Stubbed in release. */
			void getMovieAudioOutput();

			/** \details Stubbed in release. */
			void movie_audio_output;

			/** \details Stubbed in release. */
			void setMovieDepthOutput();

			/** \details Stubbed in release. */
			void getMovieDepthOutput();

			/** \details Stubbed in release. */
			void movie_depth_output;

			/** \details Stubbed in release. */
			void setMovieShutterRate();

			/** \details Stubbed in release. */
			void getMovieShutterRate();

			/** \details Stubbed in release. */
			void movie_shutter_rate;

			/** \details Stubbed in release. */
			void setMovieHiQualityMode();

			/** \details Stubbed in release. */
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
			Bool isExecuteUpdate();
			Bool isGettingPilotInVehicle();
			void getPilotInVehicle(Int unk, Bool unk2 = true);
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
			Float getCourseLength();
			Bool isLoopCourse();
			Int getCornerNum();
			Float getmaxStraightLength();
			Float getVerticalInterval();
			Float getStartV();
			Float getGoalV();

			/** \details Stubbed in release. */
			void getCarsAndCourseVramSize();

			/** \details Stubbed in release. */
			void setCarsAndCourseVramSize();

			Float getCarLODSize(Array<Int> slot_ids);

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
			StagePhaseType getRacePhase();
			StagePhaseType getNetworkRacePhase();
			void ostracizeAllCars(Bool unk);
			Bool isDebugStopFlag();
			Float getCourseStreamProgress();

			/** \details Stubbed in release. */
			void running_monitor;

			/** \details Stubbed in release. */
			void bspec_dev_skill_gauge;

			void beginReducedMem();
			void endReducedMem();

			/** \returns xyz */
			Array<Float> getVehiclePosition(Int slot_id);
			void setRaceSubMode(Bool unk);

			/** \returns 2 elements */
			Array<Int> getRaceSubModeList();
			void resetVehicle(Int unk, Int unk2);
			void resetVehicleStatus(Int unk);
			MRaceStatus getRace();
			MRaceCameraStatus getCameraControl();
			MRaceCameraSetStatus getCameraStatus(Int unk);
			MRaceEntryStatus getTargetRaceEntry(Int unk = 0);
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

			/** \details Stubbed in release. */
			void sendDebugMessage(String message);

			/** \details Stubbed in release. */
			void sendDebugMessage(Int unk, String message);
			void selectOptionalFunctions(Bool flags);
			Bool enableHMD;
			Bool disableDirectStatus;
			Bool getDerivedMapData();
    }
}