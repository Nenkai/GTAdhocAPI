using namespace System;

namespace pdiext
{
	/** \brief Console Info (Display, Audio, etc) */
	class MSystemConfiguration : public Object
	{
		public:
		
			/** \brief Gets the renderer's current resolution & more 
			\returns Array with result
			- [0] = Width (Int)
			- [1] = Height (Int)
			- [2] = Type (String)
			- [3] = Refresh Rate (Float) */
			static Array GetDisplayResolution() { };

			static Bool isSDTV();
			static Bool is4x3();
			static Int is3DTVAvailable();
			static Int isSimulViewAvailable();

			/** \brief Whether the game was booted from disc
			\details Depends on cellGameBootCheck done at boot */
			static Bool bootFromDisc();

			/** \brief Whether the game was booted from debugger
			\details Depends on cellGameBootCheck done at boot */
			static Bool bootByDebugger();

			/** \brief Stubbed. */
			static void SetVideoOutGamma(Float gamma);

			static void SetMasterRenderExposure(Float exposure);

			static void SetScreenSharpness(Int sharpness);

			static void SetDisplayMargin(Float margin);

			/** \brief Stubbed. */
			static void SetFlipTiming(Float timing);

			/** Get audio output devices information
			\details cellAudioOutGetDeviceInfo() & cellAudioOutGetState();
			\returns Array of maps for each device
			- "audioout" - (Int)
			- "channel" - (Int)
			- "encoder" - (String)
			- "fs" - (String)
			- "layout" - (Int)
			- "latency" - (Int)
			- "port" - (String)
			*/
			static Array GetSystemAudioOutputState();

			static void SetTemporalAntialias(Int val);

			static String GetEnterButtonAssign();

			/** \brief Converts provided milliseconds into a string i.e "0'01.000" or "+0'01.000" */
			static String TimeToString(Int as_diff_time, Int ms);

			/** \brief Gets the current console's username */
			static String GetOSDUserName();

			/** \brief Gets the current console's username by ID */
			static String GetOSDUserName(UInt user_id);

			/** Gets the console user id of the current user
			\details cellUserInfoGetList() with first id */
			static UInt GetOSDUserId();

			static Int GetSystemAudioAvailableOutputChannels();

			static void SetSystemAudioOutputFormat(Int format);

			/**
			\param format Number of channels?
			\param mode Use OUTPUTMONAURALMODE, OUTPUTSTEREOMODE, OUTPUTSURROUNDMODE */
			static void SetSystemAudioOutputMode(Int format, Int mode);

			/** \returns Array with results
			- [0] = Format (Int)
			- [1] = Mode (Int aka OUTPUTMONAURALMODE or OUTPUTSTEREOMODE or OUTPUTSURROUNDMODE) */
			static Array GetSystemAudioOutputMode();
	}
}