#pragma once
class MeleeAttackGoal{
	public:
		MeleeAttackGoal(PathfinderMob &,float,bool,EntityType);
		MeleeAttackGoal(PathfinderMob &,float,bool,EntityType);
		MeleeAttackGoal(PathfinderMob &,float,bool,EntityType);
		void _getAttackReachSqr(void);
		void _getAttackReachSqr(void);
		void appendDebugInfo(std::string &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canContinueToUse(void);
		void canUse(void);
		void canUse(void);
		void start(void);
		void start(void);
		void stop(void);
		void stop(void);
		void tick(void);
		void tick(void);
		void ~MeleeAttackGoal();
		void ~MeleeAttackGoal();
		void ~MeleeAttackGoal();
		void ~MeleeAttackGoal();
};
