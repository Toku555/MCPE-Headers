#pragma once
class ContainerSetSlotPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~ContainerSetSlotPacket();
		void ~ContainerSetSlotPacket();
};
