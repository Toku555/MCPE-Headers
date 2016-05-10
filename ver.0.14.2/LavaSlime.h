#pragma once
class LavaSlime{
	public:
		LavaSlime(BlockSource &);
		void canDealDamage(void);
		void canSpawn(bool);
		void causeFallDamage(float);
		void createChild(int);
		void decreaseSquish(void);
		void doPlayLandSound(void);
		void dropDeathLoot(int);
		void getArmorValue(void);
		void getBrightness(float);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getJumpDelay(void);
		void getSquishSound(void);
		void isInLava(void);
		void isOnFire(void);
		void jumpFromGround(void);
		void registerAttributes(void);
		void setSlimeSize(int);
		void ~LavaSlime();
		void ~LavaSlime();
};
