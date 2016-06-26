#pragma once
class TemptGoal{
	public:
		TemptGoal(PathfinderMob *,float,std::initializer_list<int>,bool);
		void canContinueToUse(void);
		void canUse(void);
		void isRunning(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~TemptGoal();
		void ~TemptGoal();
};
