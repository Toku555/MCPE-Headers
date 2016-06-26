#pragma once
class MoveControl{
	public:
		MoveControl(Mob *);
		void getSpeed(void);
		void hasWanted(void);
		void setWantedPosition(float,float,float,float);
		void tick(void);
		void ~MoveControl();
		void ~MoveControl();
};
