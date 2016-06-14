#pragma once
class ClientboundMapItemDataPacket{
	public:
		ClientboundMapItemDataPacket(EntityUniqueID,signed char,std::vector<std::pair<MapItemSavedData::TrackedMapEntity::UniqueId,std::shared_ptr<MapDecoration>>,std::allocator<std::pair<MapItemSavedData::TrackedMapEntity::UniqueId,std::shared_ptr<MapDecoration>>>> const&,std::vector const&<uint,std::allocator<uint>>,int,int,int,int);
		ClientboundMapItemDataPacket(EntityUniqueID,signed char,std::vector<std::pair<MapItemSavedData::TrackedMapEntity::UniqueId,std::shared_ptr<MapDecoration>>,std::allocator<std::pair<MapItemSavedData::TrackedMapEntity::UniqueId,std::shared_ptr<MapDecoration>>>> const&,std::vector const&<uint,std::allocator<uint>>,int,int,int,int);
		ClientboundMapItemDataPacket(MapItemSavedData &,Level &);
		ClientboundMapItemDataPacket(MapItemSavedData &,Level &);
		ClientboundMapItemDataPacket(void);
		ClientboundMapItemDataPacket(void);
		void applyToMap(MapItemSavedData &);
		void applyToMap(MapItemSavedData &);
		void getId(void);
		void getId(void);
		void getMapId(void);
		void getMapId(void);
		void getMapIds(void);
		void getMapIds(void);
		void getScale(void);
		void getScale(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void isOfType(ClientboundMapItemDataPacket::Type);
		void isOfType(ClientboundMapItemDataPacket::Type);
		void isTextureUpdate(void);
		void isTextureUpdate(void);
		void read(RakNet::BitStream *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~ClientboundMapItemDataPacket();
		void ~ClientboundMapItemDataPacket();
		void ~ClientboundMapItemDataPacket();
		void ~ClientboundMapItemDataPacket();
};
