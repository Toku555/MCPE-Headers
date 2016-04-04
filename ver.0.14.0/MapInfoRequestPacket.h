#pragma once
class MapInfoRequestPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~MapInfoRequestPacket();
		void ~MapInfoRequestPacket();
};
