using namespace System;

namespace pdistd
{
	/** \brief SQLite Interator Object
	\details Intended for MSqlite.query() */
	class MSqliteIterator : public Object, IIterator
	{
		public:
			void end();
			void next();
			void get();
	}
}