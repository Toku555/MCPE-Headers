#pragma once
class RemoveEntityPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~RemoveEntityPacket();
		void ~RemoveEntityPacket();
};
