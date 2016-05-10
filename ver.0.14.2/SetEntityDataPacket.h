#pragma once
class SetEntityDataPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~SetEntityDataPacket();
		void ~SetEntityDataPacket();
};
