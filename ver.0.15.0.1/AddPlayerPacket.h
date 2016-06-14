#pragma once
class AddPlayerPacket{
	public:
		AddPlayerPacket(Player const&);
		AddPlayerPacket(Player const&);
		void getId(void);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~AddPlayerPacket();
		void ~AddPlayerPacket();
		void ~AddPlayerPacket();
		void ~AddPlayerPacket();
};
