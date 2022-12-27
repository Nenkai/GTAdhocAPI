using namespace System;

namespace pdistd
{
	class MRTextDB : public Object
	{
		public:

			/** \brief Creates a new RText Database */
			MRTextDB() { };

			/** \brief Loads a .rt2 file from specified path */
			void load(String path);

			/** \brief Unloads the .rt2 file */
			void unload();

			/** \brief Gets a RT2 text by category and pair.
			\code
			var rtext = main::pdistd::MRTextDB();
			rtext.load("/description/gt6/JP.rt2");
			return rtext.get("CarDescription", "_106_rally_03"); // Returns car description
			\endcode */
			String get(String category, String pair);

	}
}