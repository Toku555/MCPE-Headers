#pragma once
class RandomLookAroundGoal{
	public:
		RandomLookAroundGoal(Mob &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void tick(void);
		void ~RandomLookAroundGoal();
		void ~RandomLookAroundGoal();
};
