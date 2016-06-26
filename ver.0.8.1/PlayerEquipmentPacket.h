#pragma once
class PlayerEquipmentPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~PlayerEquipmentPacket();
		void ~PlayerEquipmentPacket();
};
