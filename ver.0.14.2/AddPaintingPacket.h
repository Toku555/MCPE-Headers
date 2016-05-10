#pragma once
class AddPaintingPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~AddPaintingPacket();
		void ~AddPaintingPacket();
};
