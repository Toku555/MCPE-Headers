#pragma once
class MountPathingGoal{
	public:
		MountPathingGoal(Mob &,float,float,bool);
		void _getAttackReachSqr(void);
		void _init(float,float,bool);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~MountPathingGoal();
		void ~MountPathingGoal();
};
