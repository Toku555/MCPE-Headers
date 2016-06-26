#pragma once
class MeleeAttackGoal{
	public:
		MeleeAttackGoal(Mob *,float,bool);
		void _init(Mob *,float,bool);
		void canContinueToUse(void);
		void canUse(void);
		void setLevel(Level *);
		void start(void);
		void stop(void);
		void tick(void);
		void ~MeleeAttackGoal();
		void ~MeleeAttackGoal();
};
