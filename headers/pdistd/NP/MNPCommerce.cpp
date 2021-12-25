using namespace System;

namespace pdistd
{
	class MNPCommerce : public Object
	{
		public:

			MNPCommerce() { };

			static void updateCommerce();
			void initialize();
			void finalize();
			void startCreateSession();
			void getSessionInfo();
			void startCheckout();
			void endCheckout();
			void beginGetCategoryInfo();
			void endGetCategoryInfo();
			void getCategoryInfo();
			void beginGetProductInfo();
			void endGetProductInfo();
			void getProductInfo();
			void getPrice();
			void openProductCodeInputDialog();
			void finalizeProductCodeInputDialogRequest();
			void finalizeProductCodeInputDialog();
			void getRootErrorCode();
			void getLastErrorCode();
			void getLastResultCode();
	}
}