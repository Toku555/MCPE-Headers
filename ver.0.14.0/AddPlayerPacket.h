#pragma once
class AddPlayerPacket{
	public:
		AddPlayerPacket(Player const&);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~AddPlayerPacket();
		void ~AddPlayerPacket();
};
