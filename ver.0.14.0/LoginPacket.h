#pragma once
class LoginPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~LoginPacket();
		void ~LoginPacket();
};
