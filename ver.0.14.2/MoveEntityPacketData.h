#pragma once
class MoveEntityPacketData{
	public:
		MoveEntityPacketData(Entity &);
		void distantEnough(MoveEntityPacketData const&,Vec3 const&,float);
};
