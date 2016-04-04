#pragma once
class ClientboundMapItemDataPacket{
	public:
		ClientboundMapItemDataPacket(MapItemSavedData &,Level &);
		ClientboundMapItemDataPacket(void);
		void applyToMap(MapItemSavedData &);
		void getId(void);
		void getMapId(void);
		void getMapIds(void);
		void getScale(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void isOfType(ClientboundMapItemDataPacket::Type);
		void isTextureUpdate(void);
		void read(RakNet::BitStream *);
		void ~ClientboundMapItemDataPacket();
		void ~ClientboundMapItemDataPacket();
};
