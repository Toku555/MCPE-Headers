#pragma once
class DropItemPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~DropItemPacket();
		void ~DropItemPacket();
};
