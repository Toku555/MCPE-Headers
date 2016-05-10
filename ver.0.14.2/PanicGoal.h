#pragma once
class PanicGoal{
	public:
		PanicGoal(PathfinderMob &,float);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void ~PanicGoal();
		void ~PanicGoal();
};
