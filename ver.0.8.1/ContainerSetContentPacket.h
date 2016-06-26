#pragma once
class ContainerSetContentPacket{
	public:
		ContainerSetContentPacket(int,std::vector<ItemInstance,std::allocator<ItemInstance>> const&,int);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~ContainerSetContentPacket();
		void ~ContainerSetContentPacket();
};
