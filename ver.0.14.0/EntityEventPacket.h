#pragma once
class EntityEventPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~EntityEventPacket();
		void ~EntityEventPacket();
};
