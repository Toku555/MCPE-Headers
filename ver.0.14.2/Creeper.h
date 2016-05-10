#pragma once
class Creeper{
	public:
		Creeper(BlockSource &);
		void _explodeCreeper(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _getOldSwell(void);
		void _getSwell(void);
		void _ignite(void);
		void _isIgnited(void);
		void _setOldSwell(int);
		void _setPowered(bool);
		void _setSwell(int);
		void _setSwellDir(int);
		void addAdditionalSaveData(CompoundTag &);
		void calcExplosionPos(void);
		void die(EntityDamageSource const&);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getSwellDir(void);
		void getSwelling(float);
		void interactWithPlayer(Player &);
		void isPowered(void);
		void normalTick(void);
		void onLightningHit(void);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void useNewAi(void);
		void ~Creeper();
		void ~Creeper();
};
