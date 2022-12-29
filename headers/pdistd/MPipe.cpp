using namespace System;

namespace pdistd
{
	/** \brief Acts as a string builder of some sort */
	class MPipe : public Object
	{
		public:

			MPipe() { };

			/** \brief Gets the total size in the pipe */
			Int size();

			/** \brief Puts a string in the pipe*/
			void put(String str);

			/** \brief Gets the whole string in the pipe */
			String get();

			/** \brief Clears the pipe */
			void clear();
			
	}
}