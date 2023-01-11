using namespace Adhoc;
using namespace System;
using namespace pdistd;

namespace menu
{
	/** \brief Represents a core UI node. */
	public class MRootWindow : public MSBox
	{
		public:

            /** \brief Gets or sets the parent node for this node. */
		MNode parent;

            /** \brief Getter-only. Gets the next node for this node. */
		MNode MNode next;

            /** \brief Getter-only. Gets the previous node for this node. */
	      Node MNode prev;

            /** \brief Getter-only. Gets the next node for this node. Same as next */
		MNode MNode next_node;

            /** \brief Getter-only. Gets the previous node for this node. Same as prev */
		MNode MNode prev_node;

            /** \brief Getter-only. Gets the class name of this node. i.e "MRootWindow" */
            String class_name;

            /** \brief Getter-only. Gets the prototype name of this node. i.e "RootWindow" */
            String prototype_name;

            /** \brief Getter-only. Gets the name of this node. i.e "TopRoot" */
            String node_name;

            /** \brief Getter-only. Gets the path of this node. i.e "RunViewerProject::TopRoot" */
            String node_path;

            /** \brief Getter-only. */
            Bool has_alias_name;

            /** \brief Alias name. Returns "nil" if not set (use has_alias_name)*/
            String alias_name;

            /** \brief Whether this node is linked to a script. */
            Bool has_script;

            /** \brief Whether this node is enabled. */
            Bool is_enable;

            Bool package_ref;

            /** \brief Getter-only. Returns the root window linked to this node. */
            MRootWindow root_window;

            /** \brief Getter-only. Returns the project linked to this node. */
            MProject project;

            /** \brief Setter-only. Unknown, sets an engine singleton. May not be used. */
            static String GT4_compatible_name;

            /** \brief Makes a copy of this node. */
            MNode doCopy();

            /** \brief Gets this node's path.
            \param relative_to Gets path relative to a certain node 
            If the node is "RunViewerProject::TopRoot" & relative_to is "RunViewerProject", "TopRoot" will be returned
            
            \param module_separator Separator for paths, "::" by default */
            String getNodePath(MNode relative_to = nil, String module_separator = nil);

            Object reset_script_check;

            /** \brief Initializes this node. */
            void doInitialize(MRenderContext context);

            /** \brief Finalizes (destroys) this node. */
            void doFinalize(MRenderContext context);

            /** \brief Getter-only. */
            Bool has_alias;

            Bool is_component;
	};
};
