#pragma once
class MoveTowardsTargetGoal{
	public:
		MoveTowardsTargetGoal(PathfinderMob &,float,float);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void ~MoveTowardsTargetGoal();
		void ~MoveTowardsTargetGoal();
};
