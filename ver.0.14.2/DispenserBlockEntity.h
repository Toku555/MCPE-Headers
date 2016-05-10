#pragma once
class DispenserBlockEntity{
	public:
		DispenserBlockEntity(BlockPos);
		DispenserBlockEntity(BlockPos,BlockEntityType);
		void getContainerSize(void);
		void getItem(int);
		void getMaxStackSize(void);
		void getName(void);
		void getRandomSlot(void);
		void initItems(void);
		void isDispenser(void);
		void isSlotEmpty(int);
		void load(CompoundTag &);
		void removeItem(int,int);
		void save(CompoundTag &);
		void setItem(int,ItemInstance *);
		void startOpen(Player &);
		void stopOpen(Player &);
		void ~DispenserBlockEntity();
		void ~DispenserBlockEntity();
};
