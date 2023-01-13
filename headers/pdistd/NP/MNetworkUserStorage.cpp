using namespace System;

namespace pdistd
{
	/** \brief NP Title User Storage (TUS) API Interface */
	class MNetworkUserStorage : public Object
	{
		public:
			/** \brief constructor taking no param */
			MNetworkUserStorage() { };

			/** \brief  sceNpTusInit(0) - Initialize the NP title user storage utility 
			\details Also loads CELL_SYSMODULE_SYSUTIL_NP_TUS module */
			Bool initialize();

			/** \brief sceNpTusTerm - Terminate the NP title user storage utility 
			\details Unloads CELL_SYSMODULE_SYSUTIL_NP_TUS module aswell */
			Bool finalize();

			Bool isInitialized();

			/** \brief Leftover - doesn't do anything */
			void test(Int unk);

			/** \brief sceNpTusGetMultiSlotVariable - Read out one TUS variable of 1 user (synchronous) */
			Long getVariable(MPDINetworkUserId target_id, Int slot_id);

			/** \brief sceNpTusGetMultiSlotVariable - Read out multiple TUS variable of 1 user (synchronous) */
			Array<Long> getMultiSlotVariables(MPDINetworkUserId target_id, Array<Int> slot_ids);

			/** \brief sceNpTusGetMultiUserVariable - Read 1 TUS variable of multiple users (synchronous) */
			Array<Long> getMultiUserVariables(Array<MPDINetworkUserId> user_ids, Int slot_id);

			/** \brief sceNpTusSetMultiSlotVariable - Write values to one TUS variable of 1 user (synchronous) */
			Bool setVariable(MPDINetworkUserId target_id, int slot_id, Long value);

			/** \brief sceNpTusSetMultiSlotVariable - Write values to 
			\param target_id Target User ID
			\param slot_ids Max slots 
			\param value Value */
			void setMultiSlotVariables(MPDINetworkUserId target_id, Array<Int> slot_ids, Long value);

			/** \brief sceNpTusGetMultiSlotDataStatus - Get multiple TUS data statuses of 1 user (synchronous) 
			\returns Array of statuses 
			- "hasData" - (Bool)
			- "lastChangedDate" - (Long)
			- "lastChangedUserId" - (MPdiNetworkUserId)
			- "dataSize" - (ULong)
			- "dateInfoSize" - (ULong)
			- "dataInfo" - (ByteData - Max 0x180) */
			Array<Map> getMultiSlotDataStatus(MPDINetworkUserId target_id, Array<Int> slot_ids);

			/** sceNpTusGetMultiUserDataStatus - Get 1 TUS data status of multiple users (synchronous) 
			\returns Array of statuses
			- "slotId" - (Int)
			- "ownerId" - (MPdiNetworkUserId)
			- "hasData" - (Bool)
			- "lastChangedDate" - (Long)
			- "lastChangedUserId" - (MPdiNetworkUserId)
			- "dataSize" - (ULong)
			- "dateInfoSize" - (ULong)
			- "dataInfo" - (ByteData - Max 0x180) */
			Array<Map> getMultiUserDataStatus(Array<MPDINetworkUserId> user_ids, int slot_id);

			/** \brief sceNpTusGetData - Download TUS data (synchronous) 
			\returns Array of statuses
			- "slotId" - (Int)
			- "ownerId" - (MPdiNetworkUserId)
			- "hasData" - (Bool)
			- "lastChangedDate" - (Long)
			- "lastChangedUserId" - (MPdiNetworkUserId)
			- "dataSize" - (ULong)
			- "dateInfoSize" - (ULong)
			- "dataInfo" - (ByteData - Max 0x180) */
			Array<Map> getData(MPDINetworkUserId target_id, Int slot_id);

			/** \brief sceNpTusSetData - Upload TUS data (synchronous) */
			Bool setData(MPDINetworkUserId target_id, Int slot_id, ByteData info, ByteData data);

			/** \brief sceNpTusDeleteMultiSlotData - Delete TUS data of 1 user (synchronous) */
			Bool deleteData(MPDINetworkUserId target_id, Int slot_id);

			/** \brief sceNpTusDeleteMultiSlotData - Delete multiple TUS data of 1 user (synchronous) 
			\param target_id Target User ID
			\param slot_ids 64 max */
			Bool deleteMultiData(MPDINetworkUserId target_id, Array<int> slot_ids);

	}
}