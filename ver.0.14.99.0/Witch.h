#pragma once
class Witch{
	public:
		Witch(BlockSource &);
		Witch(BlockSource &);
		void _getAmbientSound(void);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _getHurtSound(void);
		void aiStep(void);
		void aiStep(void);
		void canAttack(Mob *,bool);
		void canAttack(Mob *,bool);
		void dropDeathLoot(int);
		void dropDeathLoot(int);
		void getDamageAfterMagicAbsorb(EntityDamageSource const&,int);
		void getDamageAfterMagicAbsorb(EntityDamageSource const&,int);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void getEyeHeight(void);
		void getEyeHeight(void);
		void handleEntityEvent(EntityEvent,int);
		void handleEntityEvent(EntityEvent,int);
		void isUsingItem(void);
		void performRangedAttack(Mob &,float);
		void performRangedAttack(Mob &,float);
		void registerAttributes(void);
		void registerAttributes(void);
		void setUsingItem(bool);
		void ~Witch();
		void ~Witch();
};
