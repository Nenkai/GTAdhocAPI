namespace System
{
	class Iterator : public Object, IVariable, IFunction
	{
		public:

			/* Gets the next object in this iterator */
			Object fetch_next;
	}
}