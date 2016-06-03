#pragma once
class ServerNetworkHandler{
	public:
		ServerNetworkHandler(GameCallbacks &,Level &,GameMode *,NetworkHandler &,PrivateKeyManager &,ServerLocator &,PacketSender &,SkinInfoFactory &,Whitelist const&,Player *,int,bool,std::string);
		ServerNetworkHandler(GameCallbacks &,Level &,GameMode *,NetworkHandler &,PrivateKeyManager &,ServerLocator &,PacketSender &,SkinInfoFactory &,Whitelist const&,Player *,int,bool,std::string);
		void _displayGameMessage(std::string const&,std::string const&);
		void _getPlayer(RakNet::RakNetGUID const&);
		void _getPlayer(RakNet::RakNetGUID const&,EntityUniqueID const&);
		void _getServerPlayer(RakNet::RakNetGUID const&);
		void _sendAdditionalLevelData(ServerPlayer *,RakNet::RakNetGUID const&);
		void _sendAdditionalLevelData(ServerPlayer *,RakNet::RakNetGUID const&);
		void _sendLevelData(ServerPlayer *,RakNet::RakNetGUID const&);
		void _sendLevelData(ServerPlayer *,RakNet::RakNetGUID const&);
		void activateWhitelist(void);
		void activateWhitelist(void);
		void allowIncomingConnections(std::string const&,bool);
		void allowIncomingConnections(std::string const&,bool);
		void allowIncomingPacketId(RakNet::RakNetGUID const&,int);
		void allowIncomingPacketId(RakNet::RakNetGUID const&,int);
		void createNewPlayer(RakNet::RakNetGUID const&,ConnectionRequest const&);
		void createNewPlayer(RakNet::RakNetGUID const&,ConnectionRequest const&);
		void disallowIncomingConnections(void);
		void disallowIncomingConnections(void);
		void disconnectClient(RakNet::RakNetGUID const&,std::string const&);
		void disconnectClient(RakNet::RakNetGUID const&,std::string const&);
		void getPlayerCertificate(RakNet::RakNetGUID const&);
		void handle(RakNet::RakNetGUID const&,AnimatePacket *);
		void handle(RakNet::RakNetGUID const&,AnimatePacket *);
		void handle(RakNet::RakNetGUID const&,BlockEntityDataPacket *);
		void handle(RakNet::RakNetGUID const&,BlockEntityDataPacket *);
		void handle(RakNet::RakNetGUID const&,ClientToServerHandshakePacket const*);
		void handle(RakNet::RakNetGUID const&,ClientToServerHandshakePacket const*);
		void handle(RakNet::RakNetGUID const&,ContainerClosePacket *);
		void handle(RakNet::RakNetGUID const&,ContainerClosePacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetContentPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetContentPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetSlotPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetSlotPacket *);
		void handle(RakNet::RakNetGUID const&,CraftingEventPacket *);
		void handle(RakNet::RakNetGUID const&,CraftingEventPacket *);
		void handle(RakNet::RakNetGUID const&,DropItemPacket *);
		void handle(RakNet::RakNetGUID const&,DropItemPacket *);
		void handle(RakNet::RakNetGUID const&,EntityEventPacket *);
		void handle(RakNet::RakNetGUID const&,EntityEventPacket *);
		void handle(RakNet::RakNetGUID const&,InteractPacket *);
		void handle(RakNet::RakNetGUID const&,InteractPacket *);
		void handle(RakNet::RakNetGUID const&,ItemFrameDropItemPacket *);
		void handle(RakNet::RakNetGUID const&,ItemFrameDropItemPacket *);
		void handle(RakNet::RakNetGUID const&,LoginPacket *);
		void handle(RakNet::RakNetGUID const&,LoginPacket *);
		void handle(RakNet::RakNetGUID const&,MapInfoRequestPacket *);
		void handle(RakNet::RakNetGUID const&,MapInfoRequestPacket *);
		void handle(RakNet::RakNetGUID const&,MobArmorEquipmentPacket *);
		void handle(RakNet::RakNetGUID const&,MobArmorEquipmentPacket *);
		void handle(RakNet::RakNetGUID const&,MobEquipmentPacket *);
		void handle(RakNet::RakNetGUID const&,MobEquipmentPacket *);
		void handle(RakNet::RakNetGUID const&,MoveEntityPacket *);
		void handle(RakNet::RakNetGUID const&,MoveEntityPacket *);
		void handle(RakNet::RakNetGUID const&,MovePlayerPacket *);
		void handle(RakNet::RakNetGUID const&,MovePlayerPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerActionPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerActionPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerInputPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerInputPacket *);
		void handle(RakNet::RakNetGUID const&,RemoveBlockPacket *);
		void handle(RakNet::RakNetGUID const&,RemoveBlockPacket *);
		void handle(RakNet::RakNetGUID const&,RequestChunkRadiusPacket *);
		void handle(RakNet::RakNetGUID const&,RequestChunkRadiusPacket *);
		void handle(RakNet::RakNetGUID const&,RiderJumpPacket *);
		void handle(RakNet::RakNetGUID const&,RiderJumpPacket *);
		void handle(RakNet::RakNetGUID const&,SpawnExperienceOrbPacket *);
		void handle(RakNet::RakNetGUID const&,SpawnExperienceOrbPacket *);
		void handle(RakNet::RakNetGUID const&,TextPacket *);
		void handle(RakNet::RakNetGUID const&,UseItemPacket *);
		void handle(RakNet::RakNetGUID const&,UseItemPacket *);
		void onDisconnect(RakNet::RakNetGUID const&,std::string const&);
		void onDisconnect(RakNet::RakNetGUID const&,std::string const&);
		void onNewChunkFor(Player &,LevelChunk &);
		void onNewChunkFor(Player &,LevelChunk &);
		void onPlayerReady(Player &);
		void onPlayerReady(Player &);
		void onReady_ClientGeneration(Player *,RakNet::RakNetGUID const&);
		void onReady_ClientGeneration(Player *,RakNet::RakNetGUID const&);
		void sendLoginMessageLocal(RakNet::RakNetGUID const&,ConnectionRequest const&);
		void sendLoginMessageLocal(RakNet::RakNetGUID const&,ConnectionRequest const&);
		void updateServerAnnouncement(void);
		void updateServerAnnouncement(void);
		void ~ServerNetworkHandler();
		void ~ServerNetworkHandler();
		void ~ServerNetworkHandler();
		void ~ServerNetworkHandler();
};
