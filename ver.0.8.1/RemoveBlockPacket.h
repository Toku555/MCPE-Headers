#pragma once
class RemoveBlockPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~RemoveBlockPacket();
		void ~RemoveBlockPacket();
};
