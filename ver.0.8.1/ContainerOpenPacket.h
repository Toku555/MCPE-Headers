#pragma once
class ContainerOpenPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~ContainerOpenPacket();
		void ~ContainerOpenPacket();
};
