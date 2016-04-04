#pragma once
class RangedAttackGoal{
	public:
		RangedAttackGoal(Mob &);
		RangedAttackGoal(Mob &,float,int,float);
		RangedAttackGoal(Mob &,float,int,int,float);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void stop(void);
		void tick(void);
		void ~RangedAttackGoal();
		void ~RangedAttackGoal();
};