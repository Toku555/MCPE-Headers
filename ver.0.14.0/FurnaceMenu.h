#pragma once
class FurnaceMenu{
	public:
		FurnaceMenu(Player &,BlockPos const&);
		void _getFurnaceEntity(void);
		void broadcastChanges(void);
		void getBurnProgress(int);
		void getFurnaceHasChanged(void);
		void getItems(void);
		void getLastFuelSource(void);
		void getLitProgress(int);
		void getSlot(int);
		void isFurnaceValid(void);
		void isSlotDirty(int);
		void removeSlot(int,int);
		void setData(int,int);
		void setSlot(int,ItemInstance &);
		void updatePlayerSlotChanged(int,ItemInstance const&);
		void ~FurnaceMenu();
		void ~FurnaceMenu();
};
