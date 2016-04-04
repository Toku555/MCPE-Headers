#pragma once
class MoveEntityPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~MoveEntityPacket();
		void ~MoveEntityPacket();
};
