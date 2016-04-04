#pragma once
class AnimatePacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~AnimatePacket();
		void ~AnimatePacket();
};
