#pragma once
class AdventureSettingsPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void set(AdventureSettingsPacket::Flags,bool);
		void write(RakNet::BitStream *);
		void ~AdventureSettingsPacket();
		void ~AdventureSettingsPacket();
};
