#pragma once
class AddEntityPacket{
	public:
		AddEntityPacket(Entity &);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~AddEntityPacket();
		void ~AddEntityPacket();
};
