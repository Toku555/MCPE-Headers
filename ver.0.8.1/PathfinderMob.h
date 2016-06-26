#pragma once
class PathfinderMob{
	public:
		PathfinderMob(Level *);
		void canSpawn(void);
		void checkCantSeeTarget(Entity *,float);
		void checkHurtTarget(Entity *,float);
		void findAttackTarget(void);
		void findRandomStrollLocation(void);
		void getAttackTarget(void);
		void getNoActionTime(void);
		void getWalkTargetValue(int,int,int);
		void getWalkingSpeedModifier(void);
		void isPathFinding(void);
		void setAttackTarget(Entity *);
		void setPath(Path *);
		void shouldHoldGround(void);
		void updateAi(void);
		void ~PathfinderMob();
		void ~PathfinderMob();
};
