using namespace System;

namespace pdistd
{
	/** \brief Provides Screen recording capabilities (Sony) */
	class MRecorder : public Object
	{
		public:

			/** \brief constructor taking no param */
			MRecorder() { };

			/** \brief cellRecOpen - Initialize the recording utility
			\param dir_name Directory output for the file
			\param file_name File name output
			\param cell_video_format Check CELL_REC_PARAM_VIDEO_FMT
			\param cell_audio_format Check CELL_REC_PARAM_AUDIO_FMT`
			\param unused Unused or stripped param
			\param unused2 Unused or stripped param 2
			\return Returns error code of cellRecOpen
			*/
			Int open(String dir_name, String file_name, Int cell_video_format, Int cell_audio_format, Bool unused = nil, Bool unused2 = nil);

			/** \brief cellRecClose - Terminate the recording utility */
			Int close();

			/** \brief cellRecStart - Start recording */
			Int start();

			/** \brief cellRecStop - Stop recording*/
			Int stop();
	}
}