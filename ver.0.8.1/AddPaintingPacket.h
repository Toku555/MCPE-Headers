#pragma once
class AddPaintingPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~AddPaintingPacket();
		void ~AddPaintingPacket();
};
