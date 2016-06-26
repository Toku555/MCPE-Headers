#pragma once
class RespawnPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~RespawnPacket();
		void ~RespawnPacket();
};
