#pragma once
class ContainerClosePacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~ContainerClosePacket();
		void ~ContainerClosePacket();
};
