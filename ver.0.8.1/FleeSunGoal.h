#pragma once
class FleeSunGoal{
	public:
		FleeSunGoal(PathfinderMob *,float);
		void canContinueToUse(void);
		void canUse(void);
		void getHidePos(Vec3 *);
		void setLevel(Level *);
		void start(void);
		void ~FleeSunGoal();
		void ~FleeSunGoal();
};
