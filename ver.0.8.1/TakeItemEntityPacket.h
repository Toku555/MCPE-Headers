#pragma once
class TakeItemEntityPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~TakeItemEntityPacket();
		void ~TakeItemEntityPacket();
};
