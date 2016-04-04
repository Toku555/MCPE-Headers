#pragma once
class RandomStrollGoal{
	public:
		RandomStrollGoal(PathfinderMob &,float,int,int);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void ~RandomStrollGoal();
		void ~RandomStrollGoal();
};
