#pragma once
class MoveEntityPacketData{
	public:
		MoveEntityPacketData(Entity &);
		MoveEntityPacketData(Entity &);
		void distantEnough(MoveEntityPacketData const&,Vec3 const&,float);
		void distantEnough(MoveEntityPacketData const&,Vec3 const&,float);
		void getRot(void);
		void getRot(void);
		void getYHeadRot(void);
		void getYHeadRot(void);
		void setRot(Vec2 const&);
		void setYHeadRot(float);
};
