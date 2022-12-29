using namespace System;

namespace pdistd
{
	/** \brief NP Commerce Interface */
	class MNPCommerce : public Object
	{
		public:

			MNPCommerce() { };

			static void updateCommerce();

			/** \brief sceNpCommerce2Init + sceNpCommerce2CreateCtx - Initialize the NP IN-GAME commerce 2 utility */
			Bool initialize();

			/** \brief sceNpCommerce2Term - Terminate the NP IN-GAME commerce 2 utility
			\details sceNpCommerce2DestroyCtx + sceNpCommerce2Term + cellSysmoduleUnloadModule (CELL_SYSMODULE_SYSUTIL_NP_COMMERCE2) */
			Bool finalize();

			/** \brief sceNpCommerce2CreateSessionStart - Start creating a commerce 2 session */
			Bool startCreateSession();

			/** \brief Returns session info 
			\returns Map with result
			- "currencyCode" : (String)
			- "decimals" : (Int)
			- "currencySymbol" : (String) */
			Map getSessionInfo();

			/** \brief sceNpCommerce2DoCheckoutStartAsync - Start checkout 
			\param sku_ids List of skus to purchase */
			Bool startCheckout(Array<String> sku_ids);

			/** \brief Ends checkout */
			void endCheckout();

			/** \brief sceNpCommerce2GetCategoryContentsStart - Start obtaining category content data 
			\param category_id Category id 
			\param startPosition Start Position 
			\param maxCountOfResults If set to 0, SCE_NP_COMMERCE2_GETCAT_MAX_COUNT (60) will be fetched */
			Bool beginGetCategoryInfo(String categoryId, Int startPosition = 0, Int maxCountOfResults = 0);

			/** \brief sceNpCommerce2DestroyGetCategoryContentsResult - Destroy category content data */
			void endGetCategoryInfo();

			/** \brief sceNpCommerce2GetCategoryInfo - Take out category information 
			\returns Map with result 
			- categoryId - (String) 
			- releaseDate - (MTime)
			- categoryName - (String)
			- categoryDescription - (String)
			- imageUrl - (String)
			- spName - (String)
			- contents - (Array<Map>)
			  - contentType - (String)
			  - productId - (String) - if sceNpCommerce2GetGameProductInfoFromContentInfo 
			  - countOfSku - (Int)
			  - productName - (String)
			  - spName - (String)
			  - sku - (Map) - if sceNpCommerce2GetGameSkuInfoFromGameProductInfo
			    - skuId - (String)
				- countUntilExpiration (Long)
				- timeUntilExpiration (Long)
				- purchasabilityFlag (Long)
				- annotation (Long)
				- downloadable (Bool)
				- price (Long)
				- skuName (String)
				- productId (String)
				- contentLinkUrl (String)

			- rating - (Map) - if sceNpCommerce2GetContentRatingInfoFromCategoryInfo
			  - ratingSystemId - (String)
			  - imageUrl - (String)
			  - descriptors - (Map) - sceNpCommerce2GetContentRatingDescriptor
			    - type - (Int)
				- imageUrl - (String)
				- contentRatingDescription (String)
			*/
			Map getCategoryInfo();

			/** \brief sceNpCommerce2GetProductInfoStart - Start obtaining product data */
			Bool beginGetProductInfo(String categoryId, String productId);

			/** \brief sceNpCommerce2DestroyGetProductInfoResult - Destroy product information */
			void endGetProductInfo();

			/** \brief sceNpCommerce2GetGameProductInfo - Take out game product information 
			\returns Map with product
			- "productId" - (String)
			- "productName" - (String)
			- "productShortDescription" - (String)
			- "imageUrl" - (String)
			- "spName" - (String)
			- "productLongDescription" - (String)
			- skus - (Map)
			  - skuId - (String)
			  - countUntilExpiration (Long)
			  - timeUntilExpiration (Long)
			  - purchasabilityFlag (Long)
			  - annotation (Long)
			  - downloadable (Bool)
			  - price (Long)
			  - skuName (String)
			  - productId (String)
			  - contentLinkUrl (String)
			- rating - (Map) - if sceNpCommerce2GetContentRatingInfoFromCategoryInfo
			  - ratingSystemId - (String)
			  - imageUrl - (String)
			  - descriptors - (Map) - sceNpCommerce2GetContentRatingDescriptor
			    - type - (Int)
				- imageUrl - (String)
				- contentRatingDescription (String)
			*/
			Map getProductInfo();

			/** \brief sceNpCommerce2GetPrice - Obtain the price (string) 
			\param price Price from sku structure */
			String getPrice(Int price);

			/** \brief sceNpCommerce2DoProductCodeStartAsync - Start promotion code input processing */
			Bool openProductCodeInputDialog();

			/** \brief  sceNpCommerce2DoProductCodeFinishAsync - End promotion code input processing */
			Bool finalizeProductCodeInputDialogRequest();

			void finalizeProductCodeInputDialog();

			Int getRootErrorCode();
			
			Int getLastErrorCode();

			Int getLastResultCode();
	}
}