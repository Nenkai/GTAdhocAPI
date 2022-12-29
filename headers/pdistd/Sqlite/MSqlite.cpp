using namespace System;

namespace pdistd
{
	/** \brief SQLite Library Interface Object */
	class MSqlite : public Object
	{
		public:
		
			MSqlite() { };

			/** \brief Opens SQLite file
			\param db_name Database file name.
			\param buffer_size Initial db size. 0 if reading from existing file
			\param flags Refer to https://www.sqlite.org/c3ref/c_open_autoproxy.html - To create a new file, use SQLITE_OPEN_READWRITE (2) | SQLITE_OPEN_CREATE (4)
			\param salsa_key Encryption key, if not used, no encryption used
			\return Sqlite Error - Refer to https://www.sqlite.org/rescode.html
			*/
			Int open(String db_name, UInt buffer_size = 0x8000, Int flags = 0, String salsa_key = nil);

			/** \brief Closes SQLite instance 
			\returns Sqlite Error - Refer to https://www.sqlite.org/rescode.html
			*/
			Int close();

			/** \brief Begin Transaction 
			\returns Sqlite Error - Refer to https://www.sqlite.org/rescode.html
			*/
			Int begin();

			/** \brief Commit 
			\returns Sqlite Error - Refer to https://www.sqlite.org/rescode.html
			*/
			Int commit();

			/** \brief Rollback 
			\returns Sqlite Error - Refer to https://www.sqlite.org/rescode.html
			*/
			Int rollback();

			/** \brief Executes query without return 
			\returns Sqlite Error - Refer to https://www.sqlite.org/rescode.html
			*/
			Int execute0(String query);

			/** \brief Executes query without return 
			\param query SQL Query string
			\param parameters Each parameter replaces '?' in the query string
			\returns Sqlite Error - Refer to https://www.sqlite.org/rescode.html
			*/
			Int execute(String query, Array parameters);

			/** \brief Executes Transaction 
			\returns Sqlite Error - Refer to https://www.sqlite.org/rescode.html
			*/
			Int executeTransaction(Array<String, Array<Object>> queries);

			/** \brief Executes Query 
			\param query SQL Query string
			\param parameters Each parameter replaces '?' in the query string
			\returns Array of rows with an array of columns
			*/
			Array<Array> executeQuery(String query, Array parameters);

			/** \brief Executes query and returns the first column
			\param query SQL Query string
			\param parameters Each parameter replaces '?' in the query string
			\returns Each row with the value of the first column
			*/
			Array executeQuery1C(String query, Array parameters);

			/** \brief Executes query and returns the first column of the first row
			\param query SQL Query string
			\param parameters Each parameter replaces '?' in the query string
			\returns Each row with the value of the first column
			*/
			Object executeQuery1R1C(String query, Array parameters);

			Array executeQueryBegin(Array queries, Array unk = nil, Bool unk2 = false);

			void executeQueryNext(Object unk, Bool unk2);

			/** \brief sqlite3_finalize */
			void executeQueryEnd();

			/** \brief Queries
			\param query SQL Query string
			\param parameters Each parameter replaces '?' in the query string
			\returns Returns an iterator
			\code
			foreach (var r in obj.query("SELECT * FROM GENERIC_CAR"))
			    var label = r.Label; // r is STRecord
			\endcode;
			*/
			MSqliteIterator<STRecord> query(String query, Array parameters);

			/** \brief Queries a list
			\param query SQL Query string
			\param parameters Each parameter replaces '?' in the query string
			\returns Returns an iterator
			*/
			Array<STRecord> queryList(String query, Array parameters);

			/** \brief Queries one row
			\param query SQL Query string
			\param parameters Each parameter replaces '?' in the query string
			\returns Returns an iterator
			*/
			STRecord query1();

			/** \brief Returns amount of rows with specified query
			\param query SQL Query string
			\param parameters Each parameter replaces '?' in the query string
			\returns Returns an iterator
			*/
			Int count();

			/** \brief Gets the last SQLite error
			\returns Sqlite Error - Refer to https://www.sqlite.org/rescode.html
			*/
			Int getLastError();

			/** \brief Gets the current amount of changes
			\returns Row count
			*/
			Int changes();

			/** \brief Gets the path to the DB
			*/
			String getDBPath();

			/** \brief Escapes SQL string */
			static String EscapeString(String query);
	}
}