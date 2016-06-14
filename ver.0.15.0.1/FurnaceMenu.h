#pragma once
class FurnaceMenu{
	public:
		FurnaceMenu(Player &,BlockPos const&);
		FurnaceMenu(Player &,BlockPos const&);
		void _getFurnaceEntity(void);
		void broadcastChanges(void);
		void broadcastChanges(void);
		void getBurnProgress(int);
		void getFurnaceHasChanged(void);
		void getItems(void);
		void getItems(void);
		void getLastFuelSource(void);
		void getLitProgress(int);
		void getSlot(int);
		void getSlot(int);
		void isFurnaceValid(float);
		void isSlotDirty(int);
		void isSlotDirty(int);
		void removeSlot(int,int);
		void removeSlot(int,int);
		void setData(int,int);
		void setData(int,int);
		void setSlot(int,ItemInstance &);
		void setSlot(int,ItemInstance &);
		void updatePlayerSlotChanged(int,ItemInstance const&);
		void ~FurnaceMenu();
		void ~FurnaceMenu();
		void ~FurnaceMenu();
		void ~FurnaceMenu();
};
