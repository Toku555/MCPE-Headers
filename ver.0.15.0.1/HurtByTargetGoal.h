#pragma once
class HurtByTargetGoal{
	public:
		HurtByTargetGoal(PathfinderMob &,bool);
		HurtByTargetGoal(PathfinderMob &,bool);
		HurtByTargetGoal(PathfinderMob &,bool);
		void alertOther(PathfinderMob *,Mob *);
		void alertOther(PathfinderMob *,Mob *);
		void appendDebugInfo(std::string &);
		void appendDebugInfo(std::string &);
		void canUse(void);
		void canUse(void);
		void start(void);
		void start(void);
		void ~HurtByTargetGoal();
		void ~HurtByTargetGoal();
};
