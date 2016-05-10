#pragma once
class RecieveLoveGoal{
	public:
		RecieveLoveGoal(Villager &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void tick(void);
		void ~RecieveLoveGoal();
		void ~RecieveLoveGoal();
};
