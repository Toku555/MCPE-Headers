#pragma once
class ArrowAttackGoal{
	public:
		ArrowAttackGoal(Mob *,float,int,int);
		void canContinueToUse(void);
		void canUse(void);
		void fireAtTarget(void);
		void setLevel(Level *);
		void stop(void);
		void tick(void);
		void ~ArrowAttackGoal();
		void ~ArrowAttackGoal();
};
