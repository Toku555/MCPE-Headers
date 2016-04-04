#pragma once
class SlimeMoveControl{
	public:
		SlimeMoveControl(Slime &);
		void setDirection(float,bool);
		void setWantedMovement(float);
		void tick(void);
		void ~SlimeMoveControl();
		void ~SlimeMoveControl();
};
