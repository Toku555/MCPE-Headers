#pragma once
class AddPlayerPacket{
	public:
		AddPlayerPacket(Player const*);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~AddPlayerPacket();
		void ~AddPlayerPacket();
};
