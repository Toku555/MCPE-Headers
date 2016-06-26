#pragma once
class AddItemEntityPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~AddItemEntityPacket();
		void ~AddItemEntityPacket();
};
