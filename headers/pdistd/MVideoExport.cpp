using namespace System;

namespace pdistd
{
	class MVideoExport : public Object
	{
		public:

			MVideoExport() { };

			/* Returns cell error code */
			void open();
			void finalize();
			void close();
			void start();

			Int progress();
			Bool isExportingNow();
			Object result();
	}
}