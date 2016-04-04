#pragma once
class TakeItemEntityPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~TakeItemEntityPacket();
		void ~TakeItemEntityPacket();
};
