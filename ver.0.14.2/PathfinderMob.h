#pragma once
class PathfinderMob{
	public:
		PathfinderMob(BlockSource &);
		void _getWalkTargetValue(BlockPos const&);
		void addAdditionalSaveData(CompoundTag &);
		void canSpawn(bool);
		void checkCantSeeTarget(Entity *,float);
		void checkHurtTarget(Entity *,float);
		void clearRestriction(void);
		void findAttackTarget(void);
		void findRandomStrollLocation(void);
		void getAttackTarget(void);
		void getNoActionTime(void);
		void getRestrictCenter(void);
		void getRestrictRadius(void);
		void getTempted(void);
		void hasRestriction(void);
		void isPathFinding(void);
		void isWithinRestriction(BlockPos const&);
		void isWithinRestriction(void);
		void readAdditionalSaveData(CompoundTag const&);
		void restrictTo(BlockPos const&,float);
		void setAttackTarget(Entity *);
		void setTempted(bool);
		void shouldHoldGround(void);
		void updateAi(void);
		void ~PathfinderMob();
		void ~PathfinderMob();
};
