#pragma once
class TakeFlowerGoal{
	public:
		TakeFlowerGoal(Villager &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~TakeFlowerGoal();
		void ~TakeFlowerGoal();
};
