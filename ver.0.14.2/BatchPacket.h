#pragma once
class BatchPacket{
	public:
		void compress(void);
		void getId(void);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~BatchPacket();
		void ~BatchPacket();
};
