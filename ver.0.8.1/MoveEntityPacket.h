#pragma once
class MoveEntityPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~MoveEntityPacket();
		void ~MoveEntityPacket();
};
