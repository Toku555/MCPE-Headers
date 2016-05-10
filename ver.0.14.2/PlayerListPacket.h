#pragma once
class PlayerListPacket{
	public:
		PlayerListPacket(mce::UUID const&);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~PlayerListPacket();
		void ~PlayerListPacket();
};
