#pragma once
class MoveTowardsRestrictionGoal{
	public:
		MoveTowardsRestrictionGoal(PathfinderMob &,float);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void ~MoveTowardsRestrictionGoal();
		void ~MoveTowardsRestrictionGoal();
};
