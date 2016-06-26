#pragma once
class SetEntityDataPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~SetEntityDataPacket();
		void ~SetEntityDataPacket();
};
