#pragma once
class Skeleton{
	public:
		Skeleton(BlockSource &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _playStepSound(BlockPos const&,int);
		void _reassessWeaponGoal(void);
		void _setSkeletonType(Skeleton::SkeletonType);
		void addAdditionalSaveData(CompoundTag &);
		void determineStartingGear(void);
		void die(EntityDamageSource const&);
		void doHurtTarget(Entity *);
		void dropDeathLoot(int);
		void dropRareDeathLoot(void);
		void finalizeMobSpawn(void);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getRidingHeight(void);
		void getSkeletonType(void);
		void performRangedAttack(Mob &,float);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void rideTick(void);
		void useNewAi(void);
		void ~Skeleton();
		void ~Skeleton();
};
