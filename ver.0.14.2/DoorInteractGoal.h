#pragma once
class DoorInteractGoal{
	public:
		DoorInteractGoal(Mob &);
		void _getDoorBlock(int,int,int);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void tick(void);
		void ~DoorInteractGoal();
		void ~DoorInteractGoal();
};
