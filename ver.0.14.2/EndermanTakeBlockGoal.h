#pragma once
class EndermanTakeBlockGoal{
	public:
		EndermanTakeBlockGoal(EnderMan &);
		void appendDebugInfo(std::string &);
		void canUse(void);
		void tick(void);
		void ~EndermanTakeBlockGoal();
		void ~EndermanTakeBlockGoal();
};
