#pragma once
class NetEventCallback{
	public:
		void handle(RakNet::RakNetGUID const&,AddEntityPacket *);
		void handle(RakNet::RakNetGUID const&,AddEntityPacket *);
		void handle(RakNet::RakNetGUID const&,AddItemEntityPacket *);
		void handle(RakNet::RakNetGUID const&,AddItemEntityPacket *);
		void handle(RakNet::RakNetGUID const&,AddItemPacket *);
		void handle(RakNet::RakNetGUID const&,AddItemPacket *);
		void handle(RakNet::RakNetGUID const&,AddMobPacket *);
		void handle(RakNet::RakNetGUID const&,AddMobPacket *);
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
		void handle(RakNet::RakNetGUID const&,ChunkRadiusUpdatedPacket *);
		void handle(RakNet::RakNetGUID const&,ChunkRadiusUpdatedPacket *);
		void handle(RakNet::RakNetGUID const&,ClientToServerHandshakePacket const*);
		void handle(RakNet::RakNetGUID const&,ClientToServerHandshakePacket const*);
		void handle(RakNet::RakNetGUID const&,ClientboundMapItemDataPacket *);
		void handle(RakNet::RakNetGUID const&,ClientboundMapItemDataPacket *);
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
		void handle(RakNet::RakNetGUID const&,CraftingDataPacket *);
		void handle(RakNet::RakNetGUID const&,CraftingDataPacket *);
		void handle(RakNet::RakNetGUID const&,CraftingEventPacket *);
		void handle(RakNet::RakNetGUID const&,CraftingEventPacket *);
		void handle(RakNet::RakNetGUID const&,DisconnectPacket *);
		void handle(RakNet::RakNetGUID const&,DisconnectPacket *);
		void handle(RakNet::RakNetGUID const&,DropItemPacket *);
		void handle(RakNet::RakNetGUID const&,DropItemPacket *);
		void handle(RakNet::RakNetGUID const&,ExplodePacket *);
		void handle(RakNet::RakNetGUID const&,ExplodePacket *);
		void handle(RakNet::RakNetGUID const&,FullChunkDataPacket *);
		void handle(RakNet::RakNetGUID const&,FullChunkDataPacket *);
		void handle(RakNet::RakNetGUID const&,HurtArmorPacket *);
		void handle(RakNet::RakNetGUID const&,HurtArmorPacket *);
		void handle(RakNet::RakNetGUID const&,InteractPacket *);
		void handle(RakNet::RakNetGUID const&,InteractPacket *);
		void handle(RakNet::RakNetGUID const&,ItemFrameDropItemPacket *);
		void handle(RakNet::RakNetGUID const&,ItemFrameDropItemPacket *);
		void handle(RakNet::RakNetGUID const&,LevelEventPacket *);
		void handle(RakNet::RakNetGUID const&,LevelEventPacket *);
		void handle(RakNet::RakNetGUID const&,LoginPacket *);
		void handle(RakNet::RakNetGUID const&,LoginPacket *);
		void handle(RakNet::RakNetGUID const&,MapInfoRequestPacket *);
		void handle(RakNet::RakNetGUID const&,MapInfoRequestPacket *);
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
		void handle(RakNet::RakNetGUID const&,PlayStatusPacket *);
		void handle(RakNet::RakNetGUID const&,PlayStatusPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerActionPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerActionPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerInputPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerInputPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerListPacket *);
		void handle(RakNet::RakNetGUID const&,PlayerListPacket *);
		void handle(RakNet::RakNetGUID const&,RemoveBlockPacket *);
		void handle(RakNet::RakNetGUID const&,RemoveBlockPacket *);
		void handle(RakNet::RakNetGUID const&,RemoveEntityPacket *);
		void handle(RakNet::RakNetGUID const&,RemoveEntityPacket *);
		void handle(RakNet::RakNetGUID const&,ReplaceSelectedItemPacket *);
		void handle(RakNet::RakNetGUID const&,ReplaceSelectedItemPacket *);
		void handle(RakNet::RakNetGUID const&,RequestChunkRadiusPacket *);
		void handle(RakNet::RakNetGUID const&,RequestChunkRadiusPacket *);
		void handle(RakNet::RakNetGUID const&,RespawnPacket *);
		void handle(RakNet::RakNetGUID const&,RespawnPacket *);
		void handle(RakNet::RakNetGUID const&,RiderJumpPacket *);
		void handle(RakNet::RakNetGUID const&,RiderJumpPacket *);
		void handle(RakNet::RakNetGUID const&,ServerToClientHandshakePacket const*);
		void handle(RakNet::RakNetGUID const&,ServerToClientHandshakePacket const*);
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
		void handle(RakNet::RakNetGUID const&,SetPlayerGameTypePacket *);
		void handle(RakNet::RakNetGUID const&,SetPlayerGameTypePacket *);
		void handle(RakNet::RakNetGUID const&,SetSpawnPositionPacket *);
		void handle(RakNet::RakNetGUID const&,SetSpawnPositionPacket *);
		void handle(RakNet::RakNetGUID const&,SetTimePacket *);
		void handle(RakNet::RakNetGUID const&,SetTimePacket *);
		void handle(RakNet::RakNetGUID const&,SpawnExperienceOrbPacket *);
		void handle(RakNet::RakNetGUID const&,SpawnExperienceOrbPacket *);
		void handle(RakNet::RakNetGUID const&,StartGamePacket *);
		void handle(RakNet::RakNetGUID const&,StartGamePacket *);
		void handle(RakNet::RakNetGUID const&,TakeItemEntityPacket *);
		void handle(RakNet::RakNetGUID const&,TakeItemEntityPacket *);
		void handle(RakNet::RakNetGUID const&,TelemetryEventPacket *);
		void handle(RakNet::RakNetGUID const&,TelemetryEventPacket *);
		void handle(RakNet::RakNetGUID const&,UpdateAttributesPacket *);
		void handle(RakNet::RakNetGUID const&,UpdateAttributesPacket *);
		void handle(RakNet::RakNetGUID const&,UpdateBlockPacket *);
		void handle(RakNet::RakNetGUID const&,UpdateBlockPacket *);
		void onConnect(RakNet::RakNetGUID const&);
		void onConnect(RakNet::RakNetGUID const&);
		void onPlayerReady(Player &);
		void onPlayerReady(Player &);
		void onUnableToConnect(void);
		void onUnableToConnect(void);
};
