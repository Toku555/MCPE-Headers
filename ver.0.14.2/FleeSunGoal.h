#pragma once
class FleeSunGoal{
	public:
		FleeSunGoal(PathfinderMob &,float);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void getHidePos(Vec3 *);
		void start(void);
		void ~FleeSunGoal();
		void ~FleeSunGoal();
};
