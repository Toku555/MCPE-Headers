#pragma once
class SetEntityMotionPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~SetEntityMotionPacket();
		void ~SetEntityMotionPacket();
};
