#pragma once
class ContainerAckPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~ContainerAckPacket();
		void ~ContainerAckPacket();
};
