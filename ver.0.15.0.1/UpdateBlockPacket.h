#pragma once
class UpdateBlockPacket{
	public:
		void getId(void);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~UpdateBlockPacket();
		void ~UpdateBlockPacket();
};
