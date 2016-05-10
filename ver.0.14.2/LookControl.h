#pragma once
class LookControl{
	public:
		LookControl(Mob &);
		void setLookAt(Entity *,float,float);
		void setLookAt(Vec3 const&,float,float);
		void tick(void);
		void ~LookControl();
		void ~LookControl();
};
