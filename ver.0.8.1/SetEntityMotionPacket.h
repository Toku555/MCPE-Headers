#pragma once
class SetEntityMotionPacket{
	public:
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~SetEntityMotionPacket();
		void ~SetEntityMotionPacket();
};
