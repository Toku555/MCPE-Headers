#pragma once
class LegacyClientNetworkHandler{
	public:
		LegacyClientNetworkHandler(MinecraftClient *,RakNet::RakNetGUID,NetworkHandler &,PacketSender &,PrivateKeyManager &,SoundPlayer &,Certificate const&);
		LegacyClientNetworkHandler(MinecraftClient *,RakNet::RakNetGUID,NetworkHandler &,PacketSender &,PrivateKeyManager &,SoundPlayer &,Certificate const&);
		void _getRegion(int);
		void getEntityLinksFor(Entity const&);
		void handle(RakNet::RakNetGUID const&,AddEntityPacket *);
		void handle(RakNet::RakNetGUID const&,AddEntityPacket *);
		void handle(RakNet::RakNetGUID const&,AddItemEntityPacket *);
		void handle(RakNet::RakNetGUID const&,AddItemEntityPacket *);
		void handle(RakNet::RakNetGUID const&,AddPaintingPacket *);
		void handle(RakNet::RakNetGUID const&,AddPaintingPacket *);
		void handle(RakNet::RakNetGUID const&,AddPlayerPacket *);
		void handle(RakNet::RakNetGUID const&,AddPlayerPacket *);
		void handle(RakNet::RakNetGUID const&,AdventureSettingsPacket *);
		void handle(RakNet::RakNetGUID const&,AdventureSettingsPacket *);
		void handle(RakNet::RakNetGUID const&,AnimatePacket *);
		void handle(RakNet::RakNetGUID const&,AnimatePacket *);
		void handle(RakNet::RakNetGUID const&,BlockEntityDataPacket *);
		void handle(RakNet::RakNetGUID const&,BlockEntityDataPacket *);
		void handle(RakNet::RakNetGUID const&,BlockEventPacket *);
		void handle(RakNet::RakNetGUID const&,BlockEventPacket *);
		void handle(RakNet::RakNetGUID const&,ChangeDimensionPacket *);
		void handle(RakNet::RakNetGUID const&,ChangeDimensionPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerClosePacket *);
		void handle(RakNet::RakNetGUID const&,ContainerClosePacket *);
		void handle(RakNet::RakNetGUID const&,ContainerOpenPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerOpenPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetContentPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetContentPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetDataPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetDataPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetSlotPacket *);
		void handle(RakNet::RakNetGUID const&,ContainerSetSlotPacket *);
		void handle(RakNet::RakNetGUID const&,DisconnectPacket *);
		void handle(RakNet::RakNetGUID const&,DisconnectPacket *);
		void handle(RakNet::RakNetGUID const&,ExplodePacket *);
		void handle(RakNet::RakNetGUID const&,ExplodePacket *);
		void handle(RakNet::RakNetGUID const&,FullChunkDataPacket *);
		void handle(RakNet::RakNetGUID const&,FullChunkDataPacket *);
		void handle(RakNet::RakNetGUID const&,HurtArmorPacket *);
		void handle(RakNet::RakNetGUID const&,HurtArmorPacket *);
		void handle(RakNet::RakNetGUID const&,MobArmorEquipmentPacket *);
		void handle(RakNet::RakNetGUID const&,MobArmorEquipmentPacket *);
		void handle(RakNet::RakNetGUID const&,MobEffectPacket *);
		void handle(RakNet::RakNetGUID const&,MobEffectPacket *);
		void handle(RakNet::RakNetGUID const&,MobEquipmentPacket *);
		void handle(RakNet::RakNetGUID const&,MobEquipmentPacket *);
		void handle(RakNet::RakNetGUID const&,MoveEntityPacket *);
		void handle(RakNet::RakNetGUID const&,MoveEntityPacket *);
		void handle(RakNet::RakNetGUID const&,MovePlayerPacket *);
		void handle(RakNet::RakNetGUID const&,MovePlayerPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerListPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerListPacket *);
		void handle(RakNet::RakNetGUID const&,RemoveEntityPacket *);
		void handle(RakNet::RakNetGUID const&,RemoveEntityPacket *);
		void handle(RakNet::RakNetGUID const&,SetDifficultyPacket *);
		void handle(RakNet::RakNetGUID const&,SetDifficultyPacket *);
		void handle(RakNet::RakNetGUID const&,SetEntityDataPacket *);
		void handle(RakNet::RakNetGUID const&,SetEntityDataPacket *);
		void handle(RakNet::RakNetGUID const&,SetEntityLinkPacket *);
		void handle(RakNet::RakNetGUID const&,SetEntityLinkPacket *);
		void handle(RakNet::RakNetGUID const&,SetEntityMotionPacket *);
		void handle(RakNet::RakNetGUID const&,SetEntityMotionPacket *);
		void handle(RakNet::RakNetGUID const&,SetHealthPacket *);
		void handle(RakNet::RakNetGUID const&,SetHealthPacket *);
		void handle(RakNet::RakNetGUID const&,SetSpawnPositionPacket *);
		void handle(RakNet::RakNetGUID const&,SetSpawnPositionPacket *);
		void handle(RakNet::RakNetGUID const&,SetTimePacket *);
		void handle(RakNet::RakNetGUID const&,SetTimePacket *);
		void handle(RakNet::RakNetGUID const&,StartGamePacket *);
		void handle(RakNet::RakNetGUID const&,StartGamePacket *);
		void handle(RakNet::RakNetGUID const&,UpdateBlockPacket *);
		void handle(RakNet::RakNetGUID const&,UpdateBlockPacket *);
		void handleEntityLink(EntityLink const&);
		void handleEntityLink(EntityLink const&);
		void onBlockChanged(BlockSource &,BlockPos const&,FullBlock,FullBlock,int);
		void onBlockChanged(BlockSource &,BlockPos const&,FullBlock,FullBlock,int);
		void onConnect(RakNet::RakNetGUID const&);
		void onConnect(RakNet::RakNetGUID const&);
		void onPlayerReady(Player &);
		void onPlayerReady(Player &);
		void onUnableToConnect(void);
		void onUnableToConnect(void);
		void ~LegacyClientNetworkHandler();
		void ~LegacyClientNetworkHandler();
		void ~LegacyClientNetworkHandler();
		void ~LegacyClientNetworkHandler();
};
