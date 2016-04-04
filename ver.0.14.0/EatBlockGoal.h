#pragma once
class EatBlockGoal{
	public:
		EatBlockGoal(Mob &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void getEatAnimationTick(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~EatBlockGoal();
		void ~EatBlockGoal();
};
