#pragma once
class MakeLoveGoal{
	public:
		MakeLoveGoal(Villager &);
		void _breed(Villager &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~MakeLoveGoal();
		void ~MakeLoveGoal();
};
