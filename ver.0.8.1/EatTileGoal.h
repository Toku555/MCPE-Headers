#pragma once
class EatTileGoal{
	public:
		EatTileGoal(Mob *);
		void canContinueToUse(void);
		void canUse(void);
		void getEatAnimationTick(void);
		void setLevel(Level *);
		void start(void);
		void stop(void);
		void tick(void);
		void ~EatTileGoal();
		void ~EatTileGoal();
};
