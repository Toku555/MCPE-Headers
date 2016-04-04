#pragma once
class RemoveBlockPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~RemoveBlockPacket();
		void ~RemoveBlockPacket();
};
