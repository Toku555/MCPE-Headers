#pragma once
class Sheep{
	public:
		Sheep(Level *);
		void addAdditonalSaveData(CompoundTag *);
		void aiStep(void);
		void ate(void);
		void dropDeathLoot(void);
		void finalizeMobSpawn(void);
		void getAmbientSound(void);
		void getBaseSpeed(void);
		void getBreedOffspring(Animal *);
		void getColor(void);
		void getDeathLoot(void);
		void getDeathSound(void);
		void getEntityTypeId(void);
		void getHeadEatAngleScale(float);
		void getHeadEatPositionScale(float);
		void getHurtSound(void);
		void getMaxHealth(void);
		void getSheepColor(Random *);
		void getTexture(void);
		void handleEntityEvent(char);
		void interactWithPlayer(Player *);
		void isSheared(void);
		void jumpFromGround(void);
		void newServerAiStep(void);
		void readAdditionalSaveData(CompoundTag *);
		void setColor(int);
		void setSheared(bool);
		void shouldHoldGround(void);
		void useNewAi(void);
		void ~Sheep();
		void ~Sheep();
};
