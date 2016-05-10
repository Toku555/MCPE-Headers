#pragma once
class Witch{
	public:
		Witch(BlockSource &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void aiStep(void);
		void canAttack(Mob *,bool);
		void dropDeathLoot(int);
		void getDamageAfterMagicAbsorb(EntityDamageSource const&,int);
		void getEntityTypeId(void);
		void getEyeHeight(void);
		void handleEntityEvent(EntityEvent);
		void isUsingItem(void);
		void performRangedAttack(Mob &,float);
		void registerAttributes(void);
		void setUsingItem(bool);
		void ~Witch();
		void ~Witch();
};
