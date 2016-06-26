#pragma once
class PlaceBlockPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~PlaceBlockPacket();
		void ~PlaceBlockPacket();
};
