#pragma once
class AddItemEntityPacket{
	public:
		AddItemEntityPacket(ItemEntity *);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~AddItemEntityPacket();
		void ~AddItemEntityPacket();
};
