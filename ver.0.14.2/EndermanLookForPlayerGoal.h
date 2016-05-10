#pragma once
class EndermanLookForPlayerGoal{
	public:
		EndermanLookForPlayerGoal(EnderMan &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~EndermanLookForPlayerGoal();
		void ~EndermanLookForPlayerGoal();
};
