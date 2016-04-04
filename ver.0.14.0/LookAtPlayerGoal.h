#pragma once
class LookAtPlayerGoal{
	public:
		LookAtPlayerGoal(Mob &,float,float);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~LookAtPlayerGoal();
		void ~LookAtPlayerGoal();
};
