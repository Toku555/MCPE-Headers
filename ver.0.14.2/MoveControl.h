#pragma once
class MoveControl{
	public:
		MoveControl(Mob &);
		void getSpeed(void);
		void getWantedPosition(void);
		void hasWanted(void);
		void setSpeed(float);
		void setWantedPosition(Vec3 const&,float);
		void tick(void);
		void ~MoveControl();
		void ~MoveControl();
};
