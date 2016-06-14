#pragma once
class Spider{
	public:
		Spider(BlockSource &);
		Spider(BlockSource &);
		Spider(BlockSource &);
		void _getAmbientSound(void);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _getHurtSound(void);
		void _playStepSound(BlockPos const&,int);
		void _playStepSound(BlockPos const&,int);
		void aiStep(void);
		void aiStep(void);
		void canAddRider(Entity &);
		void canAddRider(Entity &);
		void canBeAffected(MobEffectInstance const&);
		void canBeAffected(MobEffectInstance const&);
		void dropDeathLoot(int);
		void dropDeathLoot(int);
		void finalizeMobSpawn(void);
		void finalizeMobSpawn(void);
		void findAttackTarget(void);
		void findAttackTarget(void);
		void getDeathLoot(void);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void getModelScale(void);
		void getModelScale(void);
		void getRideHeight(void);
		void getRideHeight(void);
		void getShadowRadius(void);
		void getShadowRadius(void);
		void getSpiderType(void);
		void getSpiderType(void);
		void isClimbing(void);
		void makeStuckInWeb(void);
		void makeStuckInWeb(void);
		void normalTick(void);
		void normalTick(void);
		void onLadder(bool);
		void onLadder(bool);
		void registerAttributes(void);
		void registerAttributes(void);
		void setClimbing(bool);
		void setClimbing(bool);
		void useNewAi(void);
		void useNewAi(void);
		void ~Spider();
		void ~Spider();
};
