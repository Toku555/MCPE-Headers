#pragma once
class MobEffectPacket{
	public:
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~MobEffectPacket();
		void ~MobEffectPacket();
};
