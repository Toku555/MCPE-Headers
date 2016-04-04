#pragma once
class MobEquipmentPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~MobEquipmentPacket();
		void ~MobEquipmentPacket();
};
