#pragma once
class Monster{
	public:
		Monster(BlockSource &);
		void _getWalkTargetValue(BlockPos const&);
		void addAdditionalSaveData(CompoundTag &);
		void aiStep(void);
		void canSpawn(bool);
		void checkHurtTarget(Entity *,float);
		void doHurtTarget(Entity *);
		void findAttackTarget(void);
		void getAttackTime(void);
		void getExperienceReward(void);
		void hurt(EntityDamageSource const&,int);
		void isDarkEnoughToSpawn(void);
		void isSurfaceMob(void);
		void normalTick(void);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void setNightly(void);
		void shouldDespawn(void);
		void ~Monster();
		void ~Monster();
};
