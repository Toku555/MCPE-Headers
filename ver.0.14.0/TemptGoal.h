#pragma once
class TemptGoal{
	public:
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void isRunning(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~TemptGoal();
		void ~TemptGoal();
};
