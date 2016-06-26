#pragma once
class NetEventCallback{
	public:
		void allowIncomingPacketId(RakNet::RakNetGUID const&,int);
		void findPlayer(Level *,RakNet::RakNetGUID const*);
		void findPlayer(Level *,int);
		void findPlayer(Level *,int,RakNet::RakNetGUID const*);
		void handle(Level *,RakNet::RakNetGUID const&,RespawnPacket *);
		void handle(RakNet::RakNetGUID const&,AddEntityPacket *);
		void handle(RakNet::RakNetGUID const&,AddItemEntityPacket *);
		void handle(RakNet::RakNetGUID const&,AddMobPacket *);
		void handle(RakNet::RakNetGUID const&,AddPaintingPacket *);
		void handle(RakNet::RakNetGUID const&,AddPlayerPacket *);
		void handle(RakNet::RakNetGUID const&,AdventureSettingsPacket *);
		void handle(RakNet::RakNetGUID const&,AnimatePacket *);
		void handle(RakNet::RakNetGUID const&,ChatPacket *);
		void handle(RakNet::RakNetGUID const&,ChunkDataPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerAckPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerClosePacket *);
		void handle(RakNet::RakNetGUID const&,ContainerOpenPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetContentPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetDataPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetSlotPacket *);
		void handle(RakNet::RakNetGUID const&,DropItemPacket *);
		void handle(RakNet::RakNetGUID const&,EntityDataPacket *);
		void handle(RakNet::RakNetGUID const&,EntityEventPacket *);
		void handle(RakNet::RakNetGUID const&,ExplodePacket *);
		void handle(RakNet::RakNetGUID const&,HurtArmorPacket *);
		void handle(RakNet::RakNetGUID const&,InteractPacket *);
		void handle(RakNet::RakNetGUID const&,LevelEventPacket *);
		void handle(RakNet::RakNetGUID const&,LoginPacket *);
		void handle(RakNet::RakNetGUID const&,LoginStatusPacket *);
		void handle(RakNet::RakNetGUID const&,MessagePacket *);
		void handle(RakNet::RakNetGUID const&,MoveEntityPacket *);
		void handle(RakNet::RakNetGUID const&,MovePlayerPacket *);
		void handle(RakNet::RakNetGUID const&,PlaceBlockPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerActionPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerArmorEquipmentPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerEquipmentPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerInputPacket *);
		void handle(RakNet::RakNetGUID const&,ReadyPacket *);
		void handle(RakNet::RakNetGUID const&,RemoveBlockPacket *);
		void handle(RakNet::RakNetGUID const&,RemoveEntityPacket *);
		void handle(RakNet::RakNetGUID const&,RemovePlayerPacket *);
		void handle(RakNet::RakNetGUID const&,RequestChunkPacket *);
		void handle(RakNet::RakNetGUID const&,RespawnPacket *);
		void handle(RakNet::RakNetGUID const&,RotateHeadPacket *);
		void handle(RakNet::RakNetGUID const&,SendInventoryPacket *);
		void handle(RakNet::RakNetGUID const&,SetEntityDataPacket *);
		void handle(RakNet::RakNetGUID const&,SetEntityLinkPacket *);
		void handle(RakNet::RakNetGUID const&,SetEntityMotionPacket *);
		void handle(RakNet::RakNetGUID const&,SetHealthPacket *);
		void handle(RakNet::RakNetGUID const&,SetSpawnPositionPacket *);
		void handle(RakNet::RakNetGUID const&,SetTimePacket *);
		void handle(RakNet::RakNetGUID const&,StartGamePacket *);
		void handle(RakNet::RakNetGUID const&,TakeItemEntityPacket *);
		void handle(RakNet::RakNetGUID const&,TileEventPacket *);
		void handle(RakNet::RakNetGUID const&,UpdateBlockPacket *);
		void handle(RakNet::RakNetGUID const&,UseItemPacket *);
		void levelGenerated(Level *);
		void onConnect(RakNet::RakNetGUID const&);
		void onDisconnect(RakNet::RakNetGUID const&);
		void onNewClient(RakNet::RakNetGUID const&);
		void onPlayerVerified(RestCallTagData const&);
		void onPlayerVerifiedFailed(RestCallTagData const&);
		void onUnableToConnect(void);
		void ~NetEventCallback();
		void ~NetEventCallback();
};
