#pragma once
class LookAtPlayerGoal{
	public:
		LookAtPlayerGoal(Mob *,float);
		LookAtPlayerGoal(Mob *,float,float);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~LookAtPlayerGoal();
		void ~LookAtPlayerGoal();
};
