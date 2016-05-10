#pragma once
class BreakDoorGoal{
	public:
		BreakDoorGoal(Mob &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~BreakDoorGoal();
		void ~BreakDoorGoal();
};
