#pragma once
class MovePlayerPacket{
	public:
		MovePlayerPacket(Player &,Player::PositionMode);
		void getId(void);
		void handle(RakNet::RakNetGUID const&,NetEventCallback *);
		void ~MovePlayerPacket();
		void ~MovePlayerPacket();
};
