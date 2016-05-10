#pragma once
class Silverfish{
	public:
		Silverfish(BlockSource &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _playStepSound(BlockPos const&,int);
		void aiStep(void);
		void findAttackTarget(void);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getHeadHeight(void);
		void handleEntityEvent(EntityEvent);
		void hurt(EntityDamageSource const&,int);
		void isDarkEnoughToSpawn(void);
		void normalTick(void);
		void registerAttributes(void);
		void spawnAnim(void);
		void useNewAi(void);
		void ~Silverfish();
		void ~Silverfish();
};
