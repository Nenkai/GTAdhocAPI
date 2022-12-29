using namespace System;

namespace pdiext
{
	/** cellUsbPsp/libusbpspcm handler */
	class MUsbPspComm : public Object
	{
		public:
		
			MUsbPspComm() { };

			/** \brief Begins importing data
			\details Takes care of all the backend stuff.
			Inits CELL_SYSMODULE_USBPSPCM module, calls cellUsbPspcmInit, cellUsbPspcmRegister, creates "USBPSPCommImportThread" thread
			\param title 64 length max 
			\returns Cell error code */
			Int beginUSBImportData(String title);

			/** \brief Stop importing 
			\details Cleans up everything. cellUsbPspcmUnregister, cellUsbPspcmEnd, CELL_SYSMODULE_USBPSPCM module unload */
			void endUSBImportData();

			/** \brief Gets all received data */
			MBlob getUSBImportData();

			/** \brief Getter only. */
			Int syncUSB;

	}
}