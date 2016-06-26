#pragma once
class OpenDoorGoal{
	public:
		OpenDoorGoal(Mob *,bool);
		void canContinueToUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~OpenDoorGoal();
		void ~OpenDoorGoal();
};
