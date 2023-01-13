using namespace System;
using namespace menu;

namespace gtengine
{
    /** \brief Interface on NP Matching.*/
	class MLobby : public Object
	{
		  public:
            /** \brief Normally 30000ms */
            void setRequestTimeout(Int timeout_ms);
            Int pollRequest(UInt unk, Int timeout = 30000, Int unk2 = 2);
            Int checkRequestState();
            Int abortRequest(Bool unk = false);
            Bool catchRequestState(Int unk);

            /** \param handler context, type, error, requestId, args */
            void setLobbyHandler(MRenderContext context, MWidget widget, 
                FunctionObject<MRenderContext, Int, Int, Int, Array> handler);

            void unsetLobbyHandler(MRenderContext context, MWidget widget);
            void setOrganizer(MOrganizer org);
            Bool isInitialized();
            Bool selectServer(Int server);
            Bool selectWorld(Long world);
            Bool selectWorldByWorldNumber(UInt number);
            Int selectServerAndWorld();
            Int getServerList();

            /** \returns Array of results
            - "id" - (Int)
            - "status" - (Int) */
            Array<Map> getServerListLocal();

            Int getServerListRequest();
            Int getServerCount();
            Int getAvailableServerCount();
            Int getServerMax();
            Int getRoomResultMax();
            Int getWorldList(Int unk = -1);

            /** \returns Array of results
            - "serverId" - (Int)
            - "worldId" - (UInt) 
            - "worldNumber" - (Int)
            - "lobbyNum" - (Int)
            - "lobbyMemberMax" - (Int)
            - "lobbyMemberNum" - (Int)
            - "roomNum" - (Int)
            - "roomNumberNum" - (Int)
            */
            Array<Map> getWorldListLocal();
            Bool getWorldListRequest(Int unk);
            Int getWholeWorldList();
            Bool prepareWorldList(Bool unk = true);
            Int getWholeRoomCount();
            Int getWholeRoomMemberCount();
            Array<Int> getClientStatistics();
            Bool isJoinedLobby();
            Bool isJoinedRoom();
            Bool isSignalingReady(Object unk = nil);
            UInt getCurrentServerId();
            UInt getCurrentWorldId();
            ULong getCurrentLobbyId();
            ULong getCurrentRoomId();
            UInt getCurrentContext();

            /** \brief Always returns 0xcc5caea6a4b30440 in GT6 1.22*/
            ULong getRoomIdKey();
            Int getLobbyMax();
            Int getLobbyMemberMax();
            Int getLobbySlotNum();
            UInt getMyLobbyMemberId();
            Int getLobbyMemberNum();

            /** \returns Array of results 
            - "name" - (String)
            - "lobbymemberId" - (UInt)
            */
            Array<Map> getLobbyMemberList();

            /** \returns Array of results 
            - "serverId" - (Int)
            - "worldId" - (UInt)
            - "lobbyId" - (ULong)
            - "lobbyNumber" - (UInt)
            - "maxSlot" - (UInt)
            - "memberNum" - (UInt)
            - "isPermanent" - (Bool)
            */
            Array<Map> getLobbyList(UInt unk, Int unk2, Int unk3);

            /** \returns Array of results 
            - "serverId" - (Int)
            - "worldId" - (UInt)
            - "lobbyId" - (ULong)
            - "lobbyNumber" - (UInt)
            - "maxSlot" - (UInt)
            - "memberNum" - (UInt)
            - "isPermanent" - (Bool)
            */
            Array<Map> getLobbyListAsync();
            Int getLobbyListRequest(UInt unk, Int unk2);
            Int joinLobby(ULong unk, MBlob unk2 = nil);
            Int leaveLobby();
            Int sendLobbyChatMessage(String message, Int unk2 = nil, String unk3 = nil);
            Int sendLobbyChatMessage(String message, Int unk2 = nil, Int unk3 = nil);
            Int sendLobbyChatMessageAsync(String message, Int unk2 = nil, String unk3 = nil);
            Int sendLobbyChatMessageAsync(String message, Int unk2 = nil, Int unk3 = nil);
            Int setLobbyMemberAttribute(Int unk, MBlob unk2, Int unk3 = 0);
            Int getRoomMemberMax();
            Int getRoomSlotNum();
            Int getRoomMemberNum();

            /** \returns Array of results 
            - "userId" - (String)
            (Maybe more)
            */
            Array<Map> getRoomMemberList();
            Map getSpecifiedRoomMember(MPDINetworkUserId user_id);
            Map getSpecifiedRoomMember(UInt id);
            Map getSpecifiedRoomMemberByCommunicatorIndex(Int index);

            /** \returns Array of results 
            - "name" - (String)
            - "isRoomOwner" - (Bool)
            - "joinDate" - (MTime)
            */
            Array<Map> getExternalRoomMemberList(ULong room_id);
            Map getExternalRoomMemberListSync(ULong room_id);
            Int getExternalRoomMemberListRequest(ULong room_id);
            UInt getMyRoomMemberId();
            UInt getRoomOwnerMemberId();
            String getRoomOwnerName();
            Bool hasRoomPassword();
            String getRoomPassword();
            void setRoomPasswordSlotMask(ULong mask);
            Bool isRoomOwner();
            Bool isRoomCreator();
            Bool isRoomFull();

            /** \param params 
            - "serverId" - (Int)
            - "worldId" - (Long)
            - "worldNumber" - (UInt)
            - "lobbyId" - (ULong)
            - "startIndex" - (Int)
            - "max" - (Int)
            - "excludeFull" - (Bool)
            - "excludeClosed" - (Bool)
            - "conditional" - (?)
            - "natFilter" - (Bool)
            - "random" - (Bool)
            */
            Int searchRoom(Map params);
            Int searchRoomAsync(Map params);
            Array<Map> getRoomList(Int unk);
            Object getExternalRoomInfo(Int id);
            Object getExternalRoomInfoSync(Int id);
            Object getExternalRoomInfoAsync(Int id);
            void getRTTRequest(ULong id);
            Int createRoom(Map params);
            Int joinRoom(Map params);
            Int leaveRoom();
            Int sendRoomChatMessage(String message, Int unk = nil, String unk2 = nil);
            Int sendRoomChatMessage(String message, Int unk = nil, Int unk2 = nil);
            Int sendRoomChatMessageAsync(String message, Int unk = nil, String unk2 = nil);
            Int sendRoomChatMessageAsync(String message, Int unk = nil, Int unk2 = nil);
            Int sendRoomBinaryMessage(BinaryMessageType type, MBlob message, Int unk = 0, String unk2 = nil);
            Int sendRoomBinaryMessage(BinaryMessageType type, MBlob message, Int unk = 0, Int unk2 = nil);
            Int sendRoomBinaryMessageAsync(BinaryMessageType type, MBlob message, Int unk = 0, String unk2 = nil);
            Int sendRoomBinaryMessageAsync(BinaryMessageType type, MBlob message, Int unk = 0, Int unk2 = nil);
            Int grantRoomOwner(Int unk);
            Int kickOutRoomMember(Int unk, Bool unk2);
            Int leaveRoomRequest(UInt unk);

            /** \brief Stubbed*/
            void turnEverybodyOutFromRoom();
            void setRoomClosed(Bool unk, Bool unk = false);
            Bool isRoomClosed();
            void setRoomHidden(Bool unk, Bool unk = false);
            Bool isRoomHidden();
            Int setRoomOwnerMigrationOrder(Array<int> unk);
            void setRoomAttribute(Int unk, MBlob unk2);
            void setRoomAttribute(Int unk, UInt unk2);
            void setRoomMemberAttribute(Int unk, MBlob unk2, Int unk3 = 0);
            UByte getMyTeamId();
            void setTeamId(Int unk, Int unk2 = 0);
            Bool requestToken(Int unk, Int timeout_ms = 30000);
            Bool requestTokenAsync(Int unk);
            Bool releaseToken(Int unk);
            Bool isTokenOwner(Int unk);
            Bool isTokenFree();
            Int setUserInfo(Int unk, MBlob unk2);

            /** \returns Map with results
            - "name" - (String)
            - "lobbyId" - (ULong)
            - "roomId" - (ULong) */
            Array<Map> getFriendUserInfo();
            Bool sendLobbyInvitation();
            Bool sendRoomInvitation();

            /** \param params Parameter map (needs more documentation)
            - version, courseCode, isProfessionalMode, region, eventId, roomType, roomPolicy, roomGameMode, clubId, clubEventId
            \returns Array with result
            - [0] = MBlob
            - [1] = Int */
            Array createRoomConditional(Map params);

            const Long ServerIdJoining = -1;
            const Long ServerIdThrough = -2;
            const Long WorldIdThrough = -1;
    }
}