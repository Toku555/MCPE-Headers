#pragma once
class SetEntityLinkPacket{
	public:
		void getId(void);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void read(RakNet::BitStream *);
		void readLink(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void writeLink(EntityLink const&,RakNet::BitStream *);
		void ~SetEntityLinkPacket();
		void ~SetEntityLinkPacket();
};
