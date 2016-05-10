#pragma once
class TargetGoal{
	public:
		TargetGoal(PathfinderMob &,bool,bool,float);
		void _canAttack(Mob *,bool);
		void _canAttack(PathfinderMob *,Mob *,bool,bool);
		void _canReach(Entity &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void getFollowDistance(void);
		void start(void);
		void stop(void);
		void ~TargetGoal();
		void ~TargetGoal();
};
