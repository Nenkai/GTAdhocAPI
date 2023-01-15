using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a facing widget that displays a movie. */
	public class MMovieFace : public MImageFace, MMovieSetting
	{
		public:

                  /** \brief constructor taking no param */
                  MMovieFace() { };

                  /** \brief Stubbed. */
                  static void initialize();

                  /** \brief Stubbed. */
                  static void preload();

                  /** \brief Stubbed. */
                  static void loadIpic();

                  /** \brief Stubbed. */
                  static void expandAlpha();

                  /** \brief Stubbed. */
                  static void asyncSound();

                  /** \brief Stubbed. */
                  static void setPause();

                  /** \brief Gets or sets the path to the movie. Without .pam extension if appendExt(true) wasn't called */
                  String movie_name;

                  void reserveName(String movie_name);

                  void setFrameHook(Int unk, String method_name);

                  void setUnUpdate(Int unk = 1);

                  void refOther(MMovieFace movie_face);

                  void load(MRenderContext context, String movie_path);

                  void unload();

                  Long getStartPts();

                  Long getEndPts();

                  Long getCurrentPts();

                  Long setSeekPts();

                  Bool pause(Bool pause);

                  Int isPause();

                  Int isSeek();

                  Int isBuffered();

                  Int AC3;
                  Float audio_level;
                  Int audio_track;

                  void setAudioFadeOut(Float value);

                  void setPostProcessQuality(Int unk, Int unk2);

                  void setVideoSize(Int width, Int size);

                  /** \brief Sets the decryption key to use for the current movie. 
                  \details Key itself will be decrypted using GT5_TV_BASEKEY. If no key is provided, file is raw */
                  void setKey(ByteData key);

                  /** \brief Clears any decryption key in use. */
                  void clearKey();

                  void setAudioIndex(Int index);

                  void setVideoRange(Long range);

                  /** \brief Whether to append the file extension (.pam) to the movie path */
                  void appendExt(Bool append_extension);

                  String movie_name_done;
                  String movie_name_part;
                  Int interlace;
	};
}