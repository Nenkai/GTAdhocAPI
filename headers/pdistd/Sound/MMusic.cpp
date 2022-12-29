using namespace System;

namespace pdistd
{
	/** \brief Music handling interface */
	class MMusic
	{
		public:
			/** \brief Unknown. Type is 'system', 'pcm', 'midi' */
			void load(String type);

			void unload();

			/** \brief Starts playing a group. i.e "menu" 
			\returns 0 not playing, 1 playing */
			Int play(String group);

			/** \brief Starts playing a group. i.e "menu" 
			\returns 0 not playing, 1 playing */
			Int playex(String group);

			/** \brief Starts playing a music code. i.e "GT6_Menu01" 
			\returns 0 not playing, 1 playing */
			Int playDirect(String code);

			/** \brief Unknown. i.e "menu" 
			\returns 0 not playing, 1 playing */
			void keep(String group);

			/** \brief Unknown. i.e "GT6_Menu01" 
			\returns 0 not playing, 1 playing */
			void keepDirect(String code);

			/** \brief Stops playback (with fadeout if provided)*/
			void stop(Float fadeout_seconds = 0.0);

			/** \brief Pauses playback */
			void pause(Bool pause);
			
			/** \brief Fades in playback (in seconds)*/
			void fadein(Float time = 3.0);

			/** \brief Fades in playback - Direct (in seconds) */
			void fadeinDirect(Float time = 3.0);

			/** \brief Fades out playback (in seconds)*/
			void fadeout(Float time = 3.0);

			/** \brief Returns whether the mmusic is playing music */
			Int isPlaying();

			/** \brief Returns whether the mmusic's playback is paused */
			Int isPausing();

			/** \brief Gets all the groups from the BGM file as a string array */
			Array<String> getGroups();

			/** \brief Gets all the musics in the specified group i.e "menu"
			\returns Array of maps with keys:
			- (String) artist
			- (String) code
			- (String) file
			- (String) genre
			- (Int) index
			- (String) title
			*/
			Array<Map> getMusics(String group);

			/** \brief Gets a music by code i.e "GT6_Menu01"
			\returns Map with keys:
			- (String) artist
			- (String) code
			- (String) file
			- (String) genre
			- (String) title
			*/
			Map getMusicInfo(String code);

			/** \brief Stripped */
			Int setCurrentVolume();

			/** \brief Gets the native pointer address */
			Int getNativeHandle();

			/** \brief Number */
			Int number;

			/** \brief Defaults -1, 0 = no repeat, 1 = repeat */
			Int repeat;

			/** \brief Gets or sets the volume. 0.0 to 1.0, Defaults 1.0 */
			Float volume;

			/** \brief Gets or sets the crossfade time. Defaults 0.0 */
			Float crossfade_time;
	}
}