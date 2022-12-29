namespace System
{
	/** \brief Represents an iterator. 
	\details Returned when using foreach on an array, map, and more. */
	class Iterator : public Object, IVariable, IFunction
	{
		public:

			/* Gets the next object in this iterator */
			Object fetch_next;
	}
}