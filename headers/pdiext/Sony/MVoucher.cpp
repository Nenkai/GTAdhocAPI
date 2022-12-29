using namespace System;

namespace pdiext
{
	/** \brief Handler for voucher/dlcs
	\code 
	var voucher = pdiext::MVoucher();
	var res = voucher.loadDRMModule();
	if (res < 0)
	{
		// Failed to load module
		return;
	}

	res = voucher.buildIndex();
	if (res < 0)
	{
		// Failed to build index of files
		voucher.unloadDRMModule();
		return;
	}

	voucher.indexFirst();
	while (!voucher.indexIsDone())
	{
		var buf = ByteData(...);
		var [res, size] = voucher.indexLoadFile(buf);

		if (res != VoucherResultCode::ResultCodeOK)
		{
			// Handle each result code
		}

		// Do something with buf
		
		voucher.indexNext();
	}

	voucher.unloadDRMModule();
	\endcode */
	class MVoucher : public Object
	{
		public:
		
			MVoucher() { };

			/** \brief Loads DRM Module 
			\details Doesn't actually seem to do anything or load any sort of module, may not even be needed */
			VoucherResultCode loadDRMModule();

			/** \brief Unloads DRM Module 
			\details Doesn't actually seem to do anything or unload any sort of module, may not even be needed */
			VoucherResultCode unloadDRMModule();

			/** \brief Indexes all the voucher/edat files
			\details Files from the "vou" folder in the dlcontents mount point, which will be /USRDIR/vou */
			VoucherResultCode buildIndex();

			/** \brief Indexes the first voucher */
			VoucherResultCode indexFirst();

			/** \brief Indexes the next voucher*/
			VoucherResultCode indexNext();

			/** \brief Whether indexing is done */
			Int indexIsDone();

			/** \brief Loads decrypted edat file data into buffer 
			\returns Array((VoucherResultCode) result, size)*/
			Array<Int> indexLoadFile(ByteData buffer);

			VoucherResultCode indexIsValidNow();
	}
}