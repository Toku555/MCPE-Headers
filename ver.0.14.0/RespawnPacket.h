#pragma once
class RespawnPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~RespawnPacket();
		void ~RespawnPacket();
};
