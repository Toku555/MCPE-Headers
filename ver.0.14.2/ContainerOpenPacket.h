#pragma once
class ContainerOpenPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~ContainerOpenPacket();
		void ~ContainerOpenPacket();
};
