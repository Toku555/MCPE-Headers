#pragma once
class RemovePlayerPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~RemovePlayerPacket();
		void ~RemovePlayerPacket();
};
