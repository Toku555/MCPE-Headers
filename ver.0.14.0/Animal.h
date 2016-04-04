#pragma once
class Animal{
	public:
		Animal(BlockSource &);
		void _clientLoveCheck(void);
		void _getWalkTargetValue(BlockPos const&);
		void _randomHeartPos(void);
		void addAdditionalSaveData(CompoundTag &);
		void aiStep(void);
		void canAddRider(Entity &);
		void canInteractWith(Player &);
		void canMate(Animal const&);
		void getAmbientSoundInterval(void);
		void getExperienceReward(void);
		void getInteractText(Player &);
		void getLoveCause(void);
		void hurt(EntityDamageSource const&,int);
		void interactWithPlayer(Player &);
		void isFood(ItemInstance const&);
		void isInLove(void);
		void postProcessOffspring(Animal&,Animal&);
		void readAdditionalSaveData(CompoundTag const&);
		void resetLove(void);
		void setInLove(Player const*);
		void ~Animal();
		void ~Animal();
};
