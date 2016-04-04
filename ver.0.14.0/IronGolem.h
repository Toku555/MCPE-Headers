#pragma once
class IronGolem{
	public:
		IronGolem(BlockSource &);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _playStepSound(BlockPos const&,int);
		void addAdditionalSaveData(CompoundTag &);
		void aiStep(void);
		void canAttack(Mob *,bool);
		void die(EntityDamageSource const&);
		void doHurtTarget(Entity *);
		void dropDeathLoot(int);
		void getAttackAnimationTick(void);
		void getEntityTypeId(void);
		void getOfferFlowerTick(void);
		void getShadowRadius(void);
		void getVillage(void);
		void handleEntityEvent(EntityEvent);
		void isPlayerCreated(void);
		void offerFlower(bool);
		void push(Entity &,bool);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void setPlayerCreated(bool);
		void useNewAi(void);
		void ~IronGolem();
		void ~IronGolem();
};
