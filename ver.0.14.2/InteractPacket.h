#pragma once
class InteractPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~InteractPacket();
		void ~InteractPacket();
};
