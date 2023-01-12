using namespace System;
using namespace pdistd;
using namespace gtengine::GTGame;

namespace gtengine
{
	/** \brief Represents a set of events/races. */
	class MGameParameter : public Object
	{
		  public:
			MGameParameter() { };

			ULong game_id;
			ULong folder_id;

			/** \brief Getter-only. */
			std::vector<Event> events;

			UInt event_index;

			/** \brief Getter-only. */
			Event current_event;

			/** \brief Getter-only. */
			OnlineRoom online_room;

			/** \brief Getter-only. */
			Reward series_reward;

			/** \brief Getter-only. */
			Information information;

			/** \brief Getter-only. */
			EditorInfo editor_info;

			Bool championship;
			Bool arcade;
			Bool keep_sequence;
			LaunchContext launch_context;

			void deepCopy(MGameParameter gp_src);
			void incEventIndex();
			Bool isLastEvent();
			ByteData pack();
			Bool unpack(ByteData data);
			ByteData packAsRoomConfig();
			Bool unpackAsRoomConfig(ByteData data);
			ByteData packAsLoungeConfig();
			Bool unpackAsLoungeConfig(ByteData data);
			void setupTrackDayWeather(int unk = -1, Int unk = nil);
			void reduceMemoryForRace();
			void removeEntriesByEntryGenerate();

			const int VERSION = 101;
			const int INVALID_VALUE_INT = -1;

			static Bool CanRaceInTrackDayType(TrackDayType type);
			static Bool CanFreeRunInTrackDayType(TrackDayType type);
			static Int GetOwnGameRegionCode();
    }		
}