using namespace System;

namespace pdistd
{
	/** \brief XML Node */
	class MDomNode : public Object
	{
		public:

			/** Gets a new XML node */
			MDomNode() { };

			/* Gets nodes by string key */
			MDomNodeList operator[];

			/** \brief Returns whether the node has the specified attribute
			\returns 1 if true, 0 if false */
			Int hasAttribute(String attr);

			/** \brief Returns the requested attribute from this node */
			String getAttribute();

			/** \brief Gets all the attributes in this node as a Map<String key, String value> */
			Map<String, String> getAttributeMap();

			/** \brief Gets the first child node with the specified name */
			void getFirstNode(String node);

			/** \brief Adds a child node to this node */
			void addNode(String key, MDomNode node);

			/** \brief Adds an attribute to this node */
			void addAttribute(String key, String value);

			/** \brief Dumps all the children node contents (will be ordered by node name)*/
			String dump(String unk);

			void serialize();
			
			/** \brief Returns an array with each child node name */
			Array<String> elems;

			/** \brief Returns an array with each attribute name */
			Array<String> attrs;

			/** \brief Gets the value of this node */
			String value;
	}
}