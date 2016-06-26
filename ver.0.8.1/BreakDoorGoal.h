#pragma once
class BreakDoorGoal{
	public:
		BreakDoorGoal(Mob *);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void tick(void);
		void ~BreakDoorGoal();
		void ~BreakDoorGoal();
};
