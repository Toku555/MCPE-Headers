#pragma once
class AnimatePacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~AnimatePacket();
		void ~AnimatePacket();
};
