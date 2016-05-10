#pragma once
class SetEntityLinkPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~SetEntityLinkPacket();
		void ~SetEntityLinkPacket();
};
