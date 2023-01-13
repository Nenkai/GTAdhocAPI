using namespace System;

namespace pdistd
{
	/** \brief Wrapper around libsail for PAMF file streaming (Sony) */
	class MSailTranscoder : public Object
	{
		public:

			/** \brief constructor taking no param */
			MSailTranscoder() { };

			/** \brief 
			\param file_name Pamf file. Will be appended to x-pdi-fs:// for cellSailPlayerCreateDescriptor
			\param output_file Output mp4 file
			\returns CELL_SAIL_ERROR */
			Int open(String file_name, String output_file);

			/** \brief Closes and finalizes transcoder 
			\returns CELL_SAIL_ERROR */
			Int close();

			/** \brief Starts transcoding - cellSailRecorderStart & cellSailPlayerStart on a new thread 
			\details This happens on a seperate thread, use isConverting() or progress to check on it
			\code
			var transcoder = pdistd::MSailTranscoder();
			var res = transcoder.open("in.pam", "out.mp4");
			if (res != 0)
			{
				// Failed to open
				return;
			}

			res = transcoder.start();
			if (res != 0)
			{
				// Failed to transcode
				transcoder.close();
				return;
			}

			while (obj.isConverting())
    			Thread::Sleep(1);
			transcoder.close();
			\endcode
			*/
			Int start();

			/** \brief Ends transcoding */
			Int stop();

			/** \brief Sets the raw salsa key bytes to use to decrypt the provided PAMF file
			\details Use before open() */
			void setKey(ByteData raw_salsa_key_bytes);

			void setAudioTrack(Int track);

			/** \brief Sets subtitle
			\param subtitles Array of maps with 'begin_time_ms' and 'text' */
			void setSubtitle(Array<Map> subtitles);

			void setSubtitleFont(String font);

			void setSubtitleSize(Float size);

			/** \brief Getter-only. */
			Int progress;

			Bool isConverting();
	}
}