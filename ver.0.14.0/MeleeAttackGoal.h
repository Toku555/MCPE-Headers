#pragma once
class MeleeAttackGoal{
	public:
		MeleeAttackGoal(PathfinderMob &,float,bool,EntityType);
		void _getAttackReachSqr(void);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~MeleeAttackGoal();
		void ~MeleeAttackGoal();
};
