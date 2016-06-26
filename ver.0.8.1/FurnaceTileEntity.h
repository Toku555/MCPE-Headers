#pragma once
class FurnaceTileEntity{
	public:
		FurnaceTileEntity(void);
		void burn(void);
		void canBurn(void);
		void getBurnDuration(ItemInstance const&);
		void getBurnProgress(int);
		void getContainerSize(void);
		void getItem(int);
		void getLitProgress(int);
		void getMaxStackSize(void);
		void getName(void);
		void isFinished(void);
		void isFuel(ItemInstance const&);
		void isLit(void);
		void isSlotEmpty(int);
		void load(CompoundTag *);
		void removeItem(int,int);
		void save(CompoundTag *);
		void setItem(int,ItemInstance *);
		void setRemoved(void);
		void shouldSave(void);
		void startOpen(void);
		void stillValid(Player *);
		void stopOpen(void);
		void tick(void);
		void ~FurnaceTileEntity();
		void ~FurnaceTileEntity();
};
