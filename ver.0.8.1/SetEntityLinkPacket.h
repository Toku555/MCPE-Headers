#pragma once
class SetEntityLinkPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~SetEntityLinkPacket();
		void ~SetEntityLinkPacket();
};
