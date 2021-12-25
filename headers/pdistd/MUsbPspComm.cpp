using namespace System;

namespace pdistd
{
	class MUsbPspComm : public Object
	{
		public:
		
			MUsbPspComm() { };

			void beginUSBImportData();
			void endUSBImportData();
			void getUSBImportData();

			Object syncUSB;
	}
}