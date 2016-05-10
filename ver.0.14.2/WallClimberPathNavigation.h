#pragma once
class WallClimberPathNavigation{
	public:
		void createPath(Mob &);
		void createPath(Vec3 const&);
		void hasDestination(void);
		void moveTo(Mob &,float);
		void tick(void);
		void ~WallClimberPathNavigation();
		void ~WallClimberPathNavigation();
};
