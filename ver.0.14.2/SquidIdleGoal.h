#pragma once
class SquidIdleGoal{
	public:
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~SquidIdleGoal();
		void ~SquidIdleGoal();
};
