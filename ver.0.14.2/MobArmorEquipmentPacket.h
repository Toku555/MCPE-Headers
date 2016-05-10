#pragma once
class MobArmorEquipmentPacket{
	public:
		MobArmorEquipmentPacket(Mob const&);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~MobArmorEquipmentPacket();
		void ~MobArmorEquipmentPacket();
};
