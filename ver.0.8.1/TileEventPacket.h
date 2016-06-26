#pragma once
class TileEventPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~TileEventPacket();
		void ~TileEventPacket();
};
