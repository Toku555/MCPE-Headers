#pragma once
class RequestChunkPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~RequestChunkPacket();
		void ~RequestChunkPacket();
};
