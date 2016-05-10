#pragma once
class PlayerActionPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~PlayerActionPacket();
		void ~PlayerActionPacket();
};
