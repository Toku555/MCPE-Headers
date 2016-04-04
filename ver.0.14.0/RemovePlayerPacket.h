#pragma once
class RemovePlayerPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~RemovePlayerPacket();
		void ~RemovePlayerPacket();
};
