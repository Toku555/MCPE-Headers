#pragma once
class RemoveEntityPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~RemoveEntityPacket();
		void ~RemoveEntityPacket();
};
