#pragma once
namespace MoveEntityPacket{
	class PosRot{
		public:
		void read(RakNet::BitStream *);
		void write(RakNet::BitStream *);
		void ~MoveEntityPacket_PosRot();
		void ~MoveEntityPacket_PosRot();
	}
};
