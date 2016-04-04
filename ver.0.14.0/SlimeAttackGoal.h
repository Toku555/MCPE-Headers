#pragma once
class SlimeAttackGoal{
	public:
		SlimeAttackGoal(Slime &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void tick(void);
		void ~SlimeAttackGoal();
		void ~SlimeAttackGoal();
};
