#pragma once
class AddEntityPacket{
	public:
		AddEntityPacket(Entity &);
		AddEntityPacket(Entity &);
		void getId(void);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~AddEntityPacket();
		void ~AddEntityPacket();
		void ~AddEntityPacket();
		void ~AddEntityPacket();
};
