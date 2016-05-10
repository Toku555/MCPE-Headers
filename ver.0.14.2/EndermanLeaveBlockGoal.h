#pragma once
class EndermanLeaveBlockGoal{
	public:
		EndermanLeaveBlockGoal(EnderMan &);
		void appendDebugInfo(std::string &);
		void canUse(void);
		void tick(void);
		void ~EndermanLeaveBlockGoal();
		void ~EndermanLeaveBlockGoal();
};
