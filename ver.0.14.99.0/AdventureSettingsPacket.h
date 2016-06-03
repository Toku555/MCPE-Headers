#pragma once
class AdventureSettingsPacket{
	public:
		void fillIn(AdventureSettings &,Abilities &);
		void fillIn(AdventureSettings &,Abilities &);
		void getId(void);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~AdventureSettingsPacket();
		void ~AdventureSettingsPacket();
};
