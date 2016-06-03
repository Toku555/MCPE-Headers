#pragma once
class MoveThroughVillageGoal{
	public:
		MoveThroughVillageGoal(PathfinderMob &,float,bool);
		MoveThroughVillageGoal(PathfinderMob &,float,bool);
		void _getNextDoorInfo(Village *);
		void _hasVisited(DoorInfo const*);
		void _hasVisited(DoorInfo const*);
		void _updateVisited(void);
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
		void ~MoveThroughVillageGoal();
		void ~MoveThroughVillageGoal();
		void ~MoveThroughVillageGoal();
		void ~MoveThroughVillageGoal();
};
