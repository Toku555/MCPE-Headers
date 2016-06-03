#pragma once
class MoveControl{
	public:
		MoveControl(Mob &);
		MoveControl(Mob &);
		MoveControl(Mob &);
		void getSpeed(void);
		void getSpeed(void);
		void getWantedPosition(void);
		void getWantedPosition(void);
		void hasWanted(void);
		void hasWanted(void);
		void setSpeed(float);
		void setSpeed(float);
		void setWantedPosition(Vec3 const&,float);
		void setWantedPosition(Vec3 const&,float);
		void tick(void);
		void tick(void);
		void ~MoveControl();
		void ~MoveControl();
};
