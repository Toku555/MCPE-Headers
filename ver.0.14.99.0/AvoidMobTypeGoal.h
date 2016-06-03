#pragma once
class AvoidMobTypeGoal{
	public:
		AvoidMobTypeGoal(PathfinderMob &,EntityType,float,float,float);
		AvoidMobTypeGoal(PathfinderMob &,EntityType,float,float,float);
		void appendDebugInfo(std::string &);
		void appendDebugInfo(std::string &);
		void findNearestEntityToAvoid(void);
		void findNearestEntityToAvoid(void);
		void ~AvoidMobTypeGoal();
		void ~AvoidMobTypeGoal();
};
