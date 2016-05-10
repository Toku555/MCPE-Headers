#pragma once
class NearestAttackableTargetGoal{
	public:
		NearestAttackableTargetGoal(PathfinderMob &,EntityType,float,int,bool,bool);
		void appendDebugInfo(std::string &);
		void canUse(void);
		void start(void);
		void ~NearestAttackableTargetGoal();
		void ~NearestAttackableTargetGoal();
};
