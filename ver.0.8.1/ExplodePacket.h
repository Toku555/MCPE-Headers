#pragma once
class ExplodePacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~ExplodePacket();
		void ~ExplodePacket();
};
