#pragma once
class DispenserBlockEntity{
	public:
		DispenserBlockEntity(BlockPos);
		DispenserBlockEntity(BlockPos);
		DispenserBlockEntity(BlockPos,BlockEntityType);
		DispenserBlockEntity(BlockPos,BlockEntityType);
		void getContainerSize(void);
		void getContainerSize(void);
		void getItem(int);
		void getItem(int);
		void getMaxStackSize(void);
		void getMaxStackSize(void);
		void getName(void);
		void getName(void);
		void getRandomSlot(void);
		void getRandomSlot(void);
		void initItems(void);
		void isDispenser(void);
		void isSlotEmpty(int);
		void load(CompoundTag const&);
		void load(CompoundTag const&);
		void onMove(void);
		void onMove(void);
		void removeItem(int,int);
		void removeItem(int,int);
		void save(CompoundTag &);
		void save(CompoundTag &);
		void setItem(int,ItemInstance *);
		void setItem(int,ItemInstance *);
		void startOpen(Player &);
		void startOpen(Player &);
		void stopOpen(Player &);
		void stopOpen(Player &);
		void ~DispenserBlockEntity();
		void ~DispenserBlockEntity();
		void ~DispenserBlockEntity();
		void ~DispenserBlockEntity();
};
