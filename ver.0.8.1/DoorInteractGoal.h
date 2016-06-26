#pragma once
class DoorInteractGoal{
	public:
		DoorInteractGoal(Mob *);
		void canContinueToUse(void);
		void canUse(void);
		void getDoorTile(int,int,int);
		void start(void);
		void tick(void);
		void ~DoorInteractGoal();
		void ~DoorInteractGoal();
};
