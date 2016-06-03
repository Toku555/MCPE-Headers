#pragma once
class AddHangingEntityPacket{
	public:
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~AddHangingEntityPacket();
		void ~AddHangingEntityPacket();
};
