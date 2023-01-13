using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a function event. */
	public class MManager : public MEvent
	{
		public:

			/** @brief constructor taking no param */
			MManager() { };

			MWidget createWidget(String name);

			/** \brief Registers a new class to the manager. */
			void registerClass(Class class);

			/** \brief Registers a new class to the manager with the specified symbol. */
			void registerClass(Class class, Symbol symbol);

			void registerPrototypes(MComposite composite);
			void registerPrimitives(MComposite composite);

			/** \brief Stubbed. */
			void registerComponents();

			/** \brief Loads a widget file (with or without .mwidget extension)*/
			MComponent loadWidget(String widget_file_name);

			/** \brief Loads a widget file (with or without .mwidget extension)*/
			MComponent loadWidget(String dir, String widget_file_name);

			/** \brief Identical to loadWidget() */
			MComponent loadPrototype(String widget_file_name);

			/** \brief Identical to loadWidget() */
			MComponent loadPrototype(String dir, String widget_file_name);

			/** \brief Loads a project file (with or without .mproject extension)*/
			MProject loadProject(String path, Bool unk = true);

			/** \brief Unloads a project */
			void unloadProject(MProject project, Bool unk = true);

			/** \brief Unloads a project by path (with or without .mproject extension)*/
			void unloadProjectByPath(String path, Bool unk = true);

			/** \brief Unloads a project by name (with or without .mproject extension)*/
			void unloadProjectByName(String project_name, Bool unk = true);

			/** \brief Loads a project that is resident - stays loaded between projects (with or without .mproject extension). */
			MProject loadResidentProject(String path);

			/** \brief Unloads a resident project. */
			void unloadResidentProject(MProject project);

			/** \brief Stubbed. */
			Bool loadComponentProject();

			void unloadComponentProject();

			Bool merge_mode;
			Bool link_mode;
			Int save_script;
			Int raw_geometry;
			Bool is_local_target;

			MUpdateContext getUpdateContext();

			/** \brief Terminates the current project (but may boot back into it).
			\details If race, will boot back into previous project */
			void finishProject();

            /** \brief Loads any file from the current directory (basically "/") */
            MBlob loadFile(String path);

			/** \brief Loads a GPB file globally.
            \param base_dir Base dir for the GPB. /gpb/ or /<region id> will be appended depending on the region parameter. 
            \param gpb_name Gpb name, without the extension. 
            \param region Whether to use region "/<region>/" instead of the "/gpb/" subdir. */
            void loadGpb(String base_dir, String gpb_name, Bool region = false);

            /** \brief Stubbed. */
            void loadGpbFromMC(String path);

			/** \brief Returns whether a specified GPB binary exists (does not check if file exists!)*/
            Int existGpbBinary(String name);

            /** \brief Gets a gpb file within the registered ones. */
            MBlob getGpbBinary(String name);

            /** \brief Unloads a specified GPB.
            \param gpb_dir Directory
            \param gpb_name Gpb name without extension, if not provided, uses ""
            \details %s/gpb/%s.gpb */
            void unloadGpb(String gpb_dir, String gpb_name = nil);

			void setBufferDecryptManager(MBufferDecryptManager manager);

			/** \brief Translates from a CursorProject subcategory */
			String translateAtCursorProject(String category, String pair);

			String translate(String category, String pair);
            String translate(MNode node_name, String sub_category, String pair);

			String getHistory(String key);
			void setHistory(String key, String value);
			String clearHistory(String key);

			/** \brief Loads a package (.mpackage) project. 
			\details With or without extension */
			void loadPackage(String path);

			/** \brief Unloads a specific package by path */
			void unloadPackage(String path);

			/** \brief Unloads all the loaded packages */
			void unloadPackageAll();

			/** \brief Reloads all loaded packages */
			void reloadPackageAll();

			/** \brief Same as reloadPackageAll() */
			void reloadPackages();

			/** \brief Returns whether one of the registered packages has a specific entry.
			\details "/projects/%P/arcade/ArcadeOptionRoot.adc" would return true if "projects/gt6/arcade/arcade.mpackage" was loaded. */
			Bool hasPackageEntry(String entry_path);

			String target_root;

			/** \brief Gets or sets the target platform i.e "PS3" */
			String target_playform;

			String package_work;

			/** \brief Gets or sets the product name i.e "gt6"*/
			String product_name;

			/** \brief Starts a project. */
			void startProject(String current_project_name, String next_project_name);

			/** \brief Gets or sets the project root i.e "projects/gt6". */
			String project_root;

			String project_prefix;

			/** \brief Getter-only. */
			MRTextManager rtext_manager;
	}
};
