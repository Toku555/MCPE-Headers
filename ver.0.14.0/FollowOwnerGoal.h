#pragma once
class FollowOwnerGoal{
	public:
		FollowOwnerGoal(TamableAnimal *,float,float,float);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~FollowOwnerGoal();
		void ~FollowOwnerGoal();
};
