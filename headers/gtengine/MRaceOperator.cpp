using namespace System;
using namespace pdistd;

namespace gtengine
{
	/** \brief Race Operator. */
	class MRaceOperator
	{
		public:
		
			MRaceOperator();

			void setOrganizer(MOrganizer organizer);
			void startRebuildRaceSequence();
			void checkCompleteRebuildSequence(Bool unk, Bool unk = true);
			Int getRebuildErrorCode();
			Int getRebuildState();
			void clearRebuildState();
			Bool rebuildNetworkRace(Bool unk);
			Bool buildRace();
			Bool joinRace();
			void destroyRace();
			void setReplayMode(Bool unk);
			Bool isReplayMode();
			Int getRegisteredNum();
			Bool setLoadGhostFile(Int unk, MReplayInfo info, String file_name);
			void attachLoadGhostFile(String file, Int unk = 0);
			Bool checkIn(Bool unk = true);
			Bool hasEntryDone();
			void processAfterCheckIn();
			void checkOut();
			Bool allocateResource(Int unk = 0);
			Bool clearResource();

			// MCarDriverParameters might also allow just an array
			Int makeReservation(MCarParameter cp, Object target,
				MCarDriverParameter dp0, MCarDriverParameter dp1, MCarDriverParameter dp2, MCarDriverParameter dp3);

			Int makeReservation(String unk, MCarParameter cp, Object target,
				MCarDriverParameter dp0, MCarDriverParameter dp1, MCarDriverParameter dp2, MCarDriverParameter dp3);

			Int makeReservation(String unk, String unk2, MCarParameter cp, Object target,
				MCarDriverParameter dp0, MCarDriverParameter dp1, MCarDriverParameter dp2, MCarDriverParameter dp3);

			/** \brief Same as makeReservation(), check for params */
			void addAccount();

			void setAccountOwnerInfo(Int unk, String unk2, String unk3);
			void clear();
			Bool isTheater();
			void disableReplay();
			Bool isOnline();
			void returnToPaddock();
			void clearPersonalStatus();
			void applyAccountParameters();
			void writebackAccountParameters();
			Bool pushSeriesCourseCode(ULong code);
			void popSeriesCourseCode();
			ULong getSeriesCourseCode(Int unk);
			Int getCurrentSeriesRaceNumber();
			Int getMaxSeriesRace();
			void relocateGameParameter();
			void useRaceBuildParameter();
			Int getAccountID(Int unk);
			Int getAccountSlotID(Int unk);
			Bool setAccountCarParameter(Int unk, MCarParameter cp);
			MCarParameter getAccountCarParameter(Int unk);
			ULong getAccountPersonalID(Int unk);
			void setAccountPersonalID(Int unk, ULong id);
			Int getAccountPoint(Int unk);
			void setAccountPoint(Int unk, Int point);
			Int getTargetAccount(Int unk);
			Int getTargetSlot(Int unk);
			Int getPlayerSlot(Int unk = 0);
			MCarParameter getTargetCarParameter(Int unk);
			Bool setTargetCarParameter(Int unk, MCarParameter cp);
			Bool setAccountDriverParameter(Int unk, Int unk2, MCarDriverParameter dp);
			MCarDriverParameter getAccountDriverParameter(Int unk, Int unk2);
			MCarDriverParameter getTargetDriverParameter(Int unk, Int unk2);
			Bool setTargetDriverParameter(Int unk, Int unk2, MCarDriverParameter dp);
			Bool setOtherSlotDriverParameter(Int unk, Int unk2, MCarDriverParameter dp);
			Int getOtherSlotDriverNum(Int unk);
			Int storeAccountDriverParameter(Int unk);
			Int checkValidDriver(Int unk, Int unk2);
			MCarParameter reentryAccount(Int unk);
			MCarDriverParameter appendOtherDriver(Int unk, Int unk2, MCarDriverParameter dp);
			Bool updateSlotCarParameter(Int unk);
			Bool setSlotCarParameter(Int unk, MCarParameter cp);
			MCarParameter getSlotCarParameter(Int unk);
			Bool setSlotDriverParameter(Int unk, Int unk2, MCarDriverParameter cp);
			MCarDriverParameter getSlotDriverParameter(Int unk, Int unk2);
			STStructure getMemoryAssign_Standard();
			STStructure getMemoryAssign_WithGhost();
			STStructure getMemoryAssign_FewCars();
			STStructure getMemoryAssign_ExpandMemory();
			STStructure getMemoryAssign_WithoutReplay();
			STStructure getMemoryAssign_ForReplay();
			STStructure getMemoryAssign_DataLogger();

			/** \brief Getter-only. */
			ULong personal_id;
			MRaceParameter race_parameter;
			MGameParameter game_parameter;
			MRaceBuildParameter race_build_parameter;

			/** \brief Getter-only. */
			Int checked_in_car_num;

			/** \brief Getter-only. */
			Int representative_slot_id;

			/** \brief Getter-only. */
			Bool exist_spectator;
			Int window_max;
			Bool expand_memory;
			Bool with_ghost;
			Bool simul_view;
			Bool data_logger;
    }
}