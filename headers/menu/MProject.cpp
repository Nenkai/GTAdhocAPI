using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
    /** \brief Represents a project, a group of roots/pages .*/
    public class MProject : public MComposite
    {
        public:
        
          /** @brief constructor taking no param */
          MProject() { };

          /** \brief Finds a page by name. */
          MRootWindow findPage(String name);

          void exportRootWindow(Int unk_bool);

          /** \brief Gets the directory where this project is defined i.e "/projects/gt6/dev_runviewer". */
          String getDir();

          Object history;

          /** \brief Gets the component associated to this project (i.e RunViewerProjectComponent)*/
          MComponent project_component;

          /** \brief Getter-only. Gets the project file associated to this project, i.e "/projects/gt6/dev_runviewer/dev_runviewer.mproject" */
          String project_file;

          /** \brief Getter-only. Gets the project file associated to this project, i.e "/projects/gt6/dev_runviewer" */
          String project_directory;
    };

};
