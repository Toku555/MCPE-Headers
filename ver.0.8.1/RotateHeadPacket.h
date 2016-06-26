#pragma once
class RotateHeadPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~RotateHeadPacket();
		void ~RotateHeadPacket();
};
