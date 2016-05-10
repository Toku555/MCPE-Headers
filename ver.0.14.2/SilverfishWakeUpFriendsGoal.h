#pragma once
class SilverfishWakeUpFriendsGoal{
	public:
		SilverfishWakeUpFriendsGoal(Silverfish &);
		void appendDebugInfo(std::string &);
		void canUse(void);
		void notifyHurt(void);
		void tick(void);
		void ~SilverfishWakeUpFriendsGoal();
		void ~SilverfishWakeUpFriendsGoal();
};
