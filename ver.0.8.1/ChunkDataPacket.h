#pragma once
class ChunkDataPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~ChunkDataPacket();
		void ~ChunkDataPacket();
};
