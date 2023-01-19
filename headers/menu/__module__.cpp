using namespace System;
using namespace Adhoc;

/** \brief UI Widgets */
namespace menu
{
	/** \brief Functions for this module */
	public class __module__ : public Module
	{
		public:

			/** \brief Stubbed. */
			static void LoadKanjiFont();

			/** \brief Stubbed. */
			static void UnloadKanjiFont();

			static void TranslateRtext(String category, String pair);
			static void TranslateRtext(MRootWindow window, String category, String pair);
			static Int Version;
			static Int ScreenWidth;
			static Int ScreenHeight;
			static Int ScreenDepth;

			/** \brief Setter-only. */
			static Array BasicColormap;

			/** \brief Setter-only. Same as BasicColormap. */
			static Array ColorPalette;

			/** \brief Controls the framerate. 0 = unlocked, 1 = 60, 2 = 30, etc. */
			static Int FrameInterval;

			static Bool IS_FREE_CURSOR_MODE;

			/** \brief Always returns 0. */
			static Bool EventTrace; 
	};
};
