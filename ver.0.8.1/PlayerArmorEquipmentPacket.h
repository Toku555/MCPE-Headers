#pragma once
class PlayerArmorEquipmentPacket{
	public:
		PlayerArmorEquipmentPacket(Player *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~PlayerArmorEquipmentPacket();
		void ~PlayerArmorEquipmentPacket();
};
