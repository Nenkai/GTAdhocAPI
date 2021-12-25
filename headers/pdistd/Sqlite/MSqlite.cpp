using namespace System;

namespace pdistd
{
	class MSqlite : public Object
	{
		public:
		
			MSqlite() { };

			void open();
			void close();
			void begin();
			void commit();
			void rollback();
			void execute0();
			void execute();
			void executeTransaction();
			void executeQuery();
			void executeQuery1C();
			void executeQuery1R1C();
			void executeQueryBegin();
			void executeQueryNext();
			void executeQueryEnd();
			void query();
			void queryList();
			void query1();
			void count();
			void getLastError();
			void changes();
			void getDBPath();

			static void EscapeString();
	}
}