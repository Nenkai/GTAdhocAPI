using namespace System;

namespace pdistd
{
	/** \brief XML Node List */
	class MDomNodeList
	{
		public:
			/** \brief Adds a new XML node to the list */
			void push(MDomNode node);

			/** \brief Dumps all list content */
			String dump(String unk);

			/** \brief Serializes the list */
			String serialize(String unk);

			/** \brief Gets the count of nodes in the list */
			Int size;
	}
}