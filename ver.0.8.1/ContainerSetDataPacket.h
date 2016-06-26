#pragma once
class ContainerSetDataPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~ContainerSetDataPacket();
		void ~ContainerSetDataPacket();
};
