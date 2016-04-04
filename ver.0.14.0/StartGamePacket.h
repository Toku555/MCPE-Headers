#pragma once
class StartGamePacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~StartGamePacket();
		void ~StartGamePacket();
};
