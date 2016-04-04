#pragma once
class PlayGoal{
	public:
		PlayGoal(Villager *,float);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~PlayGoal();
		void ~PlayGoal();
};
