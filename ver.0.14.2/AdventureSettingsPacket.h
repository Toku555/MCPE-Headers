#pragma once
class AdventureSettingsPacket{
	public:
		AdventureSettingsPacket(AdventureSettings const&,Abilities const&);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~AdventureSettingsPacket();
		void ~AdventureSettingsPacket();
};
