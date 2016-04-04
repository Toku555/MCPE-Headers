#pragma once
class BrewingStandBlockEntity{
	public:
		BrewingStandBlockEntity(BlockPos const&);
		void brew(void);
		void canBrew(void);
		void canPullOutItem(int,int,ItemInstance *);
		void canPushInItem(int,int,ItemInstance *);
		void getBrewTime(void);
		void getContainerSize(void);
		void getCustomName(void);
		void getFinished(void);
		void getIngredient(void);
		void getItem(int);
		void getMaxStackSize(void);
		void getName(void);
		void getPotionSlotUsage(void);
		void isFinished(void);
		void isSlotEmpty(int);
		void load(CompoundTag &);
		void onChanged(BlockSource &);
		void removeItem(int,int);
		void resetFinished(void);
		void save(CompoundTag &);
		void setBrewTime(int);
		void setCustomName(std::string &);
		void setFinished(bool);
		void setIngredient(Item *);
		void setItem(int,ItemInstance *);
		void startOpen(Player &);
		void stopOpen(Player &);
		void tick(BlockSource &);
		void ~BrewingStandBlockEntity();
		void ~BrewingStandBlockEntity();
};
