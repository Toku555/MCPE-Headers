#pragma once
class BegGoal{
	public:
		BegGoal(Wolf *);
		void _playerHoldingInteresting(Player *);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~BegGoal();
		void ~BegGoal();
};
