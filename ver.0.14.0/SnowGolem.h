#pragma once
class SnowGolem{
	public:
		SnowGolem(BlockSource &);
		void addAdditionalSaveData(CompoundTag &);
		void aiStep(void);
		void canInteractWith(Player &);
		void dropDeathLoot(int);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getInteractText(Player &);
		void interactWithPlayer(Player &);
		void isDerp(void);
		void performRangedAttack(Mob &,float);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void setDerp(bool);
		void useNewAi(void);
		void ~SnowGolem();
		void ~SnowGolem();
};
