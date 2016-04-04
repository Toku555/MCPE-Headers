#pragma once
class HopperBlockEntity{
	public:
		HopperBlockEntity(BlockPos const&);
		void _initItems(void);
		void checkForSmeltEverythingAchievement(BlockSource &);
		void getAttachedFurnace(BlockSource &);
		void getContainerSize(void);
		void getItem(int);
		void getLevelPos(void);
		void getMaxStackSize(void);
		void getName(void);
		void isAttachedToChestAndFurnace(BlockSource &);
		void isAttachedToContainerType(BlockSource &,ContainerType);
		void isSourceOfContainerType(BlockSource &,ContainerType);
		void load(CompoundTag &);
		void onNeighborChanged(BlockSource &,BlockPos const&);
		void removeItem(int,int);
		void save(CompoundTag &);
		void setItem(int,ItemInstance *);
		void startOpen(Player &);
		void stopOpen(Player &);
		void tick(BlockSource &);
		void ~HopperBlockEntity();
		void ~HopperBlockEntity();
};
