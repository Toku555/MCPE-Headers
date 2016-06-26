#pragma once
class LevelEventPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~LevelEventPacket();
		void ~LevelEventPacket();
};
