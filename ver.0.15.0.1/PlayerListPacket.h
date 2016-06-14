#pragma once
class PlayerListPacket{
	public:
		PlayerListPacket(mce::UUID const&);
		PlayerListPacket(mce::UUID const&);
		void getId(void);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~PlayerListPacket();
		void ~PlayerListPacket();
		void ~PlayerListPacket();
		void ~PlayerListPacket();
};
