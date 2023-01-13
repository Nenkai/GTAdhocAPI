namespace System
{
	/** \brief Built-in dictionary/key-value pair object based on std::map. 
	\details The keys are always ordered by their comparator i.e numerically for integers or alphabetically for strings. */
	class Map : public Object, IMap
	{
		public:
			/** \brief Creates a new map. */
			Map() {}

			/** \brief Clears the map. */
			void clear();

			/** \brief Returns whether the map is empty. */
			Bool empty();

			/** \brief Removes a pair by key. */
			void erase(String key);

			/** \brief Finds a pair by key. */
			Map find(String key);

			/** \brief Inserts a new pair into the map. There must be only one element in the input map. */
			void insert(Map pair);

			/** \brief Gets the amount of elements in this map. */
			Int size();

			/** \brief Performs a callback on each element of the map. */
			void each(FunctionObject<Object> cb);
	}
}