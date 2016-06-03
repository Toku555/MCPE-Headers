#pragma once
class MobArmorEquipmentPacket{
	public:
		MobArmorEquipmentPacket(Mob const&);
		MobArmorEquipmentPacket(Mob const&);
		MobArmorEquipmentPacket(void);
		MobArmorEquipmentPacket(void);
		void fillIn(Mob &);
		void fillIn(Mob &);
		void getId(void);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~MobArmorEquipmentPacket();
		void ~MobArmorEquipmentPacket();
		void ~MobArmorEquipmentPacket();
		void ~MobArmorEquipmentPacket();
};
