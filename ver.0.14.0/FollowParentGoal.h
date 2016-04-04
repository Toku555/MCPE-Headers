#pragma once
class FollowParentGoal{
	public:
		FollowParentGoal(Animal &,float);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~FollowParentGoal();
		void ~FollowParentGoal();
};
