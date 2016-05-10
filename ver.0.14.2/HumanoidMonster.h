#pragma once
class HumanoidMonster{
	public:
		HumanoidMonster(BlockSource &);
		void addAdditionalSaveData(CompoundTag &);
		void determineStartingGear(void);
		void doHurtTarget(Entity *);
		void getCarriedItem(void);
		void getExperienceReward(void);
		void postInit(void);
		void readAdditionalSaveData(CompoundTag const&);
		void rollMobArmor(void);
		void rollWeaponEnchant(void);
		void setCarriedItem(ItemInstance const&);
		void setEquippedSlot(ArmorSlot,ItemInstance const&);
		void setEquippedSlot(ArmorSlot,int,int);
		void ~HumanoidMonster();
		void ~HumanoidMonster();
};
