#pragma once
class TargetGoal{
	public:
		TargetGoal(PathfinderMob &,bool,bool,float);
		TargetGoal(PathfinderMob &,bool,bool,float);
		void _canAttack(Mob *,bool);
		void _canAttack(Mob *,bool);
		void _canAttack(PathfinderMob *,Mob *,bool,bool);
		void _canAttack(PathfinderMob *,Mob *,bool,bool);
		void _canReach(Entity &);
		void _canReach(Entity &);
		void appendDebugInfo(std::string &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canContinueToUse(void);
		void getFollowDistance(void);
		void getFollowDistance(void);
		void start(void);
		void start(void);
		void stop(void);
		void stop(void);
		void ~TargetGoal();
		void ~TargetGoal();
};
