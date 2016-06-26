#pragma once
class LookControl{
	public:
		LookControl(Mob *);
		void setLookAt(Entity *,float,float);
		void setLookAt(float,float,float,float,float);
		void tick(void);
		void ~LookControl();
		void ~LookControl();
};
