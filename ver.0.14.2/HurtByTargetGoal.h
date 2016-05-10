#pragma once
class HurtByTargetGoal{
	public:
		HurtByTargetGoal(PathfinderMob &,bool);
		void alertOther(PathfinderMob *,Mob *);
		void appendDebugInfo(std::string &);
		void canUse(void);
		void start(void);
		void ~HurtByTargetGoal();
		void ~HurtByTargetGoal();
};
