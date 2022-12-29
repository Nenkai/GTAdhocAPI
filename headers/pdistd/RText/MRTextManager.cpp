using namespace System;

namespace pdistd
{
	/** \brief Localization Database Manager */
	class MRTextManager : public Object
	{
		public:

			MRTextManager() { };

			/** \brief Sets the region to use.
			\details Should of the following: "scee", "scea", "scej", "sceb"
			Should be using pdiext::MProductInformation::GetGameRegionCode() 
			This function actually just does region[3] and checks for the letter for the region.. 
			Might crash if not >= 4 letters */
			void setRegion(String region);

			void setRegionedTable(Array<Int> unk);
			void clearRegionedTable();
			void reserveMemoryCommon(UInt mem_size, Bool with_tsm = false);

			/** \brief Loads the common rtext */
			void loadCommon(String rtext_common_dir);

			void unloadCommon();

			/** \brief Pushes a new rtext DB */
			void pushDB(String rtext_dir);

			/** \bruef Pops the last rtext DB */
			void popDB();

			/** \brief Returns a localized string */
			String getStr(String category, String page);

			/** \brief Loads a debug rtext from the specified directory 
			\param mount_point Example: /APP_USB to load from USB or any other path */
			void useDevelopmentFile(String mount_point);

			/** \brief Whether to show text ids */
			Bool debug;

	}
}