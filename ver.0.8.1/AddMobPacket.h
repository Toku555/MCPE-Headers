#pragma once
class AddMobPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~AddMobPacket();
		void ~AddMobPacket();
};
