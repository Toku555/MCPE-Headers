#pragma once
class ItemFrameDropItemPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~ItemFrameDropItemPacket();
		void ~ItemFrameDropItemPacket();
};
