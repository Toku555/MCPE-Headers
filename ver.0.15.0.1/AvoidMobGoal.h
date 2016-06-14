#pragma once
class AvoidMobGoal{
	public:
		AvoidMobGoal(PathfinderMob &,float,float,float);
		AvoidMobGoal(PathfinderMob &,float,float,float);
		void appendDebugInfo(std::string &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canContinueToUse(void);
		void canUse(void);
		void canUse(void);
		void findNearestEntityToAvoid(void);
		void findNearestEntityToAvoid(void);
		void start(void);
		void start(void);
		void stop(void);
		void stop(void);
		void tick(void);
		void tick(void);
		void ~AvoidMobGoal();
		void ~AvoidMobGoal();
		void ~AvoidMobGoal();
		void ~AvoidMobGoal();
};
