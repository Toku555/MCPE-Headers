#pragma once
class Ocelot{
	public:
		Ocelot(BlockSource &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _removeWhenFarAway(void);
		void _serverAiMobStep(void);
		void addAdditionalSaveData(CompoundTag &);
		void canAddRider(Entity &);
		void canInteractWith(Player &);
		void canMate(Animal const&);
		void causeFallDamage(float);
		void createBreedOffspring(Animal &);
		void doHurtTarget(Entity *);
		void finalizeMobSpawn(void);
		void getBaseSpeed(void);
		void getCatType(void);
		void getEntityTypeId(void);
		void getInteractText(Player &);
		void getRideHeight(void);
		void hurt(EntityDamageSource const&,int);
		void interactWithPlayer(Player &);
		void isFood(ItemInstance const&);
		void postProcessOffspring(Animal &,Animal &);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void setCatType(CatType);
		void setOwner(EntityUniqueID);
		void useNewAi(void);
		void ~Ocelot();
		void ~Ocelot();
};
